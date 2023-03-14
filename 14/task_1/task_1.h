#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
	int data;
	struct Queue *next;
}Queue;

void enqueue(Queue **, Queue **, int);

void dequeue(Queue **);

void createQueue(Queue **, Queue **);

void display(Queue **);