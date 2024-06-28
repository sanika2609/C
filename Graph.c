#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the adjacency list
struct Node {
    int data;
    struct Node* next;
};

// Structure to represent the graph
struct Graph {
    int vertices;
    struct Node** adjacencyList;
};

// Structure to represent a queue node
struct QueueNode {
    int data;
    struct QueueNode* next;
};

// Structure to represent a queue
struct Queue {
    struct QueueNode *front, *rear;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with a given number of vertices
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;
    graph->adjacencyList = (struct Node**)malloc(vertices * sizeof(struct Node*));

    for (int i = 0; i < vertices; ++i) {
        graph->adjacencyList[i] = NULL;
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge from src to dest
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjacencyList[src];
    graph->adjacencyList[src] = newNode;

    // Add edge from dest to src (for undirected graph)
    newNode = createNode(src);
    newNode->next = graph->adjacencyList[dest];
    graph->adjacencyList[dest] = newNode;
}

// Function to create a new queue node
struct QueueNode* createQueueNode(int data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create an empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to enqueue a node to the queue
void enqueue(struct Queue* queue, int data) {
    struct QueueNode* newNode = createQueueNode(data);
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
        return;
    }
    queue->rear->next = newNode;
    queue->rear = newNode;
}

// Function to dequeue a node from the queue
int dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        return -1; // Queue is empty
    }
    int data = queue->front->data;
    struct QueueNode* temp = queue->front;
    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    return data;
}

// Function to perform Breadth First Traversal of the graph
void BFS(struct Graph* graph, int startVertex) {
    int* visited = (int*)malloc(graph->vertices * sizeof(int));

    for (int i = 0; i < graph->vertices; ++i) {
        visited[i] = 0;
    }

    struct Queue* queue = createQueue();
    visited[startVertex] = 1;
    enqueue(queue, startVertex);

    while (queue->front != NULL) {
        int currentVertex = dequeue(queue);
        printf("%d ", currentVertex);

        struct Node* temp = graph->adjacencyList[currentVertex];
        while (temp != NULL) {
            int adjacentVertex = temp->data;
            if (!visited[adjacentVertex]) {
                visited[adjacentVertex] = 1;
                enqueue(queue, adjacentVertex);
            }
            temp = temp->next;
        }
    }

    // Free allocated memory
    free(visited);
    free(queue);
}

// Main function to test BFS
int main() {
    int vertices = 5;
    struct Graph* graph = createGraph(vertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);

    printf("Breadth First Traversal starting from vertex 0:\n");
    BFS(graph, 0);

    // Free allocated memory
    free(graph->adjacencyList);
    free(graph);

    return 0;
}
