#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Global variable
struct Node* head = NULL;

// Function to add a node at the end of the linked list
void addNodeAtEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to remove a node from the end of the linked list
void removeNodeFromEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* current = head;
    struct Node* previous = NULL;

    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }

    free(current);
    previous->next = NULL;
}

// Function to count the number of nodes with odd data
int countOddNodes() {
    struct Node* current = head;
    int count = 0;

    while (current != NULL) {
        if (current->data % 2 != 0) {
            count++;
        }
        current = current->next;
    }

    return count;
}

// Function to display the linked list
void displayList() {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Main function
int main() {
    // Add nodes at the end
    addNodeAtEnd(1);
    addNodeAtEnd(2);
    addNodeAtEnd(3);

    // Display the original linked list
    displayList();

    // Remove a node from the end
    removeNodeFromEnd();

    // Display the linked list after removal
    displayList();

    // Count the number of odd nodes
    int oddCount = countOddNodes();
    printf("Number of odd nodes: %d\n", oddCount);

    return 0;
}
