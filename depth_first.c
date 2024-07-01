#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct graph
{
int vertices;
struct Node**adjacencylist;
{;
struct Node*createNode(int data)
{
struct Node*
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=NULL;
return newNode;
}
