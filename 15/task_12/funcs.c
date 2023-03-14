#include "task_12.h"

void enqueue(struct Queue *myQueue, int x){

	struct Node *temp;
	temp = malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;

	if (myQueue->front == NULL && myQueue->rear == NULL){
		myQueue->front = myQueue->rear = temp;
		return;
	}
	myQueue->rear->next = temp;
	myQueue->rear = temp;
}

struct Node* dequeue(struct Queue *myQueue){

	struct Node *temp = myQueue->front;
	
	if (myQueue->front == NULL){
		printf("Empty Queue\n");
		return myQueue->front;
	}

	if (myQueue->front == myQueue->rear){
		myQueue->front = myQueue->rear = NULL;
	}
	else {
		myQueue->front = myQueue->front->next;
	}

	return temp;
}

void display(struct Queue *myQueue){
	struct Node *temp = myQueue->front;
	while(temp){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

struct Queue *QueueInit(){
	
	struct Queue *thisQueue = malloc(sizeof *thisQueue);

	thisQueue->front = NULL;
	thisQueue->rear = NULL;

	return thisQueue;
}

void fillQueue(struct Queue* queue, int* arr){

	for (int i = 0; i < LEN; i++){
		enqueue(queue, arr[i]);
	}
}

struct Queue* sortTwoQueues(struct Queue* first, struct Queue* second){

	struct Queue *result = QueueInit();
	struct Node *front_node1 = first->front;
	struct Node *front_node2 = second->front;

	while(front_node1 != NULL && front_node2 != NULL){

		if (front_node1->data < front_node2->data){

			enqueue(result, front_node1->data);
			front_node1 = front_node1->next;
		}

		else {

			enqueue(result, front_node2->data);
			front_node2 = front_node2->next;	
		}

		// if there is inexhausted struct, add it's nodes->data to result;

		if (front_node1 == NULL){

			while (front_node2 != NULL){

				enqueue(result, front_node2->data);
				front_node2 = front_node2->next;
			}
		}

		if (front_node2 == NULL){

			while (front_node1 != NULL){
				
				enqueue(result, front_node1->data);
				front_node1 = front_node1->next;
			}
		}
	}

	return result;
}

void action(int *test_arr1, int *test_arr2){
	
	struct Queue *first = QueueInit();
    struct Queue *second = QueueInit();
    struct Queue *result = QueueInit();

    fillQueue(first, test_arr1);
    fillQueue(second, test_arr2);

    result = sortTwoQueues(first, second);
    display(result);
    
    printf("\n");
}