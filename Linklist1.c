#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Singly Linked List structure
struct LinkedList {
    struct Node* head;
};

// Function to add a node at a specific position
void addNodeAtPosition(struct LinkedList* list, int data, int position) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;

    if (position == 1) {
        new_node->next = list->head;
        list->head = new_node;
    } else {
        struct Node* current = list->head;
        for (int i = 1; i < position - 1 && current != NULL; i++) {
            current = current->next;
        }

        if (current == NULL) {
            printf("Position out of bounds\n");
            return;
        }

        new_node->next = current->next;
        current->next = new_node;
    }
}

// Function to remove a node from the beginning
void removeNodeFromBeginning(struct LinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty\n");
    } else {
        struct Node* temp = list->head;
        list->head = list->head->next;
        free(temp);
    }
}

// Function to display the linked list
void displayList(struct LinkedList* list) {
    struct Node* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Create an empty linked list
    struct LinkedList linkedList;
    linkedList.head = NULL;

    // Adding nodes at specific positions
    addNodeAtPosition(&linkedList, 1, 1);
    addNodeAtPosition(&linkedList, 3, 2);
    addNodeAtPosition(&linkedList, 5, 2);

    // Displaying the list
    printf("Linked List: ");
    displayList(&linkedList);

    // Removing node from the beginning
    removeNodeFromBeginning(&linkedList);

    // Displaying the list after removal
    printf("Linked List after removal: ");
    displayList(&linkedList);

    return 0;
}
