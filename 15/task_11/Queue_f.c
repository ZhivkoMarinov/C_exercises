#include"Queue_h.h"

void init(){
    front=NULL;
    rear=NULL;
}

void enQueue(int data){
    Queue * current =(Queue*)malloc(sizeof(Queue));
    current->data=data;
    current->next=NULL;
    if(front==NULL){
        front=current;
        rear=current;
        return;
    }
    rear->next=current;
    rear=current;
}

int deQueue(){
    Queue * current = front;
    if(front==NULL){
        printf("The queue is empty:");
        exit(0);
    }
    if(front==rear){
        front=NULL;
        rear=NULL;
        int value = current->data;
        free(current);
        return value;
    }
    int value = current->data;
    front=front->next;
    free(current);
    return value;
}

void printQueue(){
    Queue * tmp = front;
    while(tmp!=NULL){
        printf("%d",tmp->data);
        tmp=tmp->next;
    }
    printf("\n");
}