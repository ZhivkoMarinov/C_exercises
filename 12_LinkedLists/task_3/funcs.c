#include "task_3.h"

LinkedList* init(){

    LinkedList *newList = malloc(sizeof(LinkedList));
    newList->head = NULL;
    
    return newList;
}

void insertLast(LinkedList *list, int data){

    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (list->head == NULL){
        list->head = newNode;
        return;
    }

    Node *temp = list->head;
    
    while(temp->next){
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteByVal(LinkedList *list, int value){

    Node *current = list->head;
    Node *prev = NULL;

    if (list->head == NULL){
        return;
    }

    if (list->head->data == value){
        list->head = list->head->next;
        deleteByVal(list, value);
    }

    while(current->next){
        
        prev = current;
        current = current->next;
        
        if (current->data == value){
            prev->next = current->next;
        }
    }
}

void display(LinkedList *list){

    if (list->head == NULL){
        printf("Empty List\n");
        return;
    }

    Node *temp = list->head;
    while(temp){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n------------------\n");
}

void run(LinkedList *list, int children, int M){

    for (int i = 1 ; i <= children; i++){
        insertLast(list, i);
    }

    linkLastAndHead(list);

    while (list->head->next != NULL){
        deleteByPos(list, M);
        changeHead(list, M);
    }

    display(list);
}

void linkLastAndHead(LinkedList *list){
    if (list->head == NULL){
        printf("Empty List, nothing to link\n");
        return;
    }

    Node *temp = list->head;

    while(temp->next){
        temp = temp->next;
    }

    temp->next = list->head;
}

void deleteByPos(LinkedList *list, int position){

    if (list->head == NULL){
        printf("Empty List\n");
        return;
    }

    if (position == 1){
        
        if (list->head->next){
            list->head = list->head->next;

        }
        else {

            list->head = NULL;
        }
        return;
    }

    int count = 0;
    Node *current = list->head;
    Node *prev = NULL;

    while (count < position - 1){

        if(current == NULL){
            printf("No position %d\n", position);
            return;
        }

        prev = current;
        current = current->next;
        count++;
    }
    prev->next = current->next;
}

void changeHead(LinkedList *list, int position){
    
    if (list->head->data == list->head->next->data){
        list->head->next = NULL;
        return;
    }

    Node *temp = list->head;

    int count = 0;
    while(count < position - 1){

        temp = temp->next;        
        count++;
    }

    list->head = temp;
}





