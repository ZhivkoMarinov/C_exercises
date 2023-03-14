#include "task_16.h"
 
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

void bubbleSort(int *arr, int size){

    for (int i = 0; i < size - 1; i++)
  
        for (int j = 0; j < size - i - 1; j++){
            
            if (arr[j] < arr[j + 1])
            swap(&arr[j], &arr[j + 1]);
        }
}

void swap(int *x, int *y){

    int temp = *x;
    *x = *y;
    *y = temp;
}

void longestSeq(LinkedList* list, int k, int sumElem){

    Node *temp = list->head;

    int rem = sumElem % k;
    if (rem == 0){
        printf("All");
        return;
    }

    int target = sumElem - rem;
    int count = 0;

    while (temp){
        
        if (sumElem - temp->data == target){
            printf("N - 1");
            return;            
        }

    }
}

// 4 2 2 2 1 1 1 = 13 % 5 = 3 =>>> 13 - 3 = 10
// 6 4 4 3 3 3 2 = 25 % 6 = 1 =>>> 25 - 1 = 24 - 6 = 18