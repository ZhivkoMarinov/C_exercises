#include <stdio.h>
#include <stdlib.h>

#define TESTCASE 3
#define LEN 10

struct Node {
	int data;
	struct Node *next;
};
typedef struct Node *ptrQueue;

struct Queue {
	ptrQueue front;
	ptrQueue rear;
};

struct Queue *QueueInit();

void enqueue(struct Queue *, int);
struct Node* dequeue(struct Queue *);
void display(struct Queue *);

void fillQueue(struct Queue*, int*);
struct Queue* sortTwoQueues(struct Queue*, struct Queue*);
void action(int *test_arr1, int *test_arr2);
