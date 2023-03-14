#include "task_1.h"

Queue *createnode(int data){

	Queue *temp = malloc(sizeof(Queue));

	temp->data = data;
	temp->next = NULL;

	return temp;
}

void enqueue(Queue **front, Queue **rear, int data)
{
 	Queue *newnode, *temp_rear;
 	newnode = createnode(data);
 	temp_rear = *rear;


 	if (newnode == NULL){
 		printf("Out of memory\n");
 		return;
 	}
 	
 	if (*front == NULL){
		*front = newnode;
		*rear = newnode;
	}
 	else {
  		temp_rear->next = newnode;
  		*rear = newnode;
 	}
  printf("Data Inserted into the Queue\n");
}

void dequeue(Queue **front){
	
	if (*front == NULL){
		printf("Empty Queue\n");
		return;
	}

	Queue *temp = *front;
	printf("%d ", temp->data);
	temp = temp->next;
	*front = temp;
}

void createQueue(Queue **front, Queue **rear){

	int numCount = 0;

	do {
		printf("Enter number count [1 - 101]: ");
		scanf("%d", &numCount);
	}while(numCount < 1 || numCount > 101);

	for (int i = 0; i < numCount; i++){

		int num = 0;
		printf("Eneter num %d: ", i + 1);		
		scanf("%d", &num);
		enqueue(front, rear, num);
	}
}

void display(Queue **front){

	if (*front == NULL){
		printf("Empty Queue!\n");
		return;
	}
	
	int *even_buffer = NULL;
	int counter = 0;
	Queue *temp = *front;
	
	while (temp){
	    
	    if (temp->data % 2 == 0){
	        
	        if (even_buffer == NULL){
	            even_buffer = malloc(sizeof(int));
	        }
	        else{
	            even_buffer = realloc(even_buffer, sizeof(int) * (counter + 1));
	        }
	        even_buffer[counter] = temp->data;
	        counter++;
	    }
	    else{
	        printf("%d ", temp->data);
	    }
		temp = temp->next;
		
	}
	
	printf("\n");
	
	for (int i = 0; i < counter; i++){
	    printf("%d ", even_buffer[i]);
	}
}
