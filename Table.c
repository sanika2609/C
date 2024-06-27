#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

// Define a structure for the hash table entry
struct Node {
    int key;
    int value;
    struct Node* next;
};

// Define the hash table
struct Node* hashTable[TABLE_SIZE];

// Hash function to map keys to an index
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Function to insert a key-value pair into the hash table
void insert(int key, int value) {
    int index = hashFunction(key);

    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    // Insert the new node at the beginning of the linked list at the index
    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }
}

// Function to retrieve the value associated with a key from the hash table
int get(int key) {
    int index = hashFunction(key);
    struct Node* current = hashTable[index];

    // Traverse the linked list at the index to find the key
    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }

    // Key not found
    return -1;
}

// Main function for testing
int main() {
    // Insert key-value pairs into the hash table
    insert(1, 10);
    insert(2, 20);
    insert(11, 30);

    // Retrieve values using keys
    printf("Value for key 1: %d\n", get(1));
    printf("Value for key 2: %d\n", get(2));
    printf("Value for key 11: %d\n", get(11));

    // Test a key not present in the hash table
    printf("Value for key 5: %d\n", get(5));

    return 0;
}
