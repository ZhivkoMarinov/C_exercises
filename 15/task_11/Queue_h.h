#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int data;
    struct Queue *next;
} Queue;

extern Queue *front, *rear;

void init();
void enQueue(int data);
int deQueue();
void printQueue();

#endif // QUEUE_H