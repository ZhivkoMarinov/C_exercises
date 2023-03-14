#include "task_14.h"
 
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

void deleteOddSeq(LinkedList *list){

    if (list == NULL){
        // printf("Empty list\n");
        return;
    }

    Node *temp = list->head;

    int num = temp->data;
    int counter = 1;

    while (temp->next){
        
        if (num == temp->next->data){
            counter++;
        }
        else {
            
            if (counter % 2 != 0){

                deleteByVal(list, num);
                num = temp->data;
            }
            
            num = temp->next->data;
            counter = 1;
        }

        temp = temp->next;
    }

    if (temp->data == num && counter % 2 != 0){
        deleteByVal(list, num);
    }
}

void bubbleSort(int *arr, int size){

    for (int i = 0; i < size - 1; i++)
  
        for (int j = 0; j < size - i - 1; j++){
            
            if (arr[j] > arr[j + 1])
            swap(&arr[j], &arr[j + 1]);
        }
}

void swap(int *x, int *y){

    int temp = *x;
    *x = *y;
    *y = temp;
}

void run(int *arr){

    LinkedList *newList = init();

    bubbleSort(arr, SIZE);

    for (int i = 0; i < SIZE; i++){
        insertLast(newList, arr[i]);
    }
    printf("Before delete: ");
    display(newList);
    deleteOddSeq(newList);
    printf("After delete: ");
    display(newList);

}