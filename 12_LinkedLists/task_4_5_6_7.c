#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct TDListNode {
   int data;
   int key;

   struct TDListNode *next;
   struct TDListNode *prev;
}TDListNode;

//this link always point to first Link
TDListNode *head = NULL;

//this link always point to last Link 
TDListNode *last = NULL;

TDListNode *current = NULL;

//is list empty
bool isEmpty() {
    return head == NULL;
}

int length() {
    int length = 0;
    TDListNode *current;
    
    for(current = head; current != NULL; current = current->next){
        length++;
    }
    
    return length;
}

//display the list in from first to last
void displayForward() {

    //start from the beginning
    TDListNode *ptr = head;
    
    //navigate till the end of the list
    printf("\n[");
    
    while(ptr != NULL) {        
        printf("(%d,%d) ",ptr->key,ptr->data);
        ptr = ptr->next;
    }
    
    printf("]\n");
}

//display the list from last to first
void displayBackward() {

    //start from the last
    TDListNode *ptr = last;
    
    //navigate till the start of the list
    printf("\n[");
    
    while(ptr != NULL) {    
    
        //print data
        printf("(%d,%d) ",ptr->key,ptr->data);
        
        //move to next item
        ptr = ptr ->prev;
      
    }
    printf("]\n");   
}

//insert link at the first location
void insertFirst(int key, int data) {

    //create a link
    TDListNode *link = (TDListNode*) malloc(sizeof(TDListNode));
    link->key = key;
    link->data = data;
    
    if(isEmpty()) {
        //make it the last link
        last = link;
    } else {
        //update first prev link
        head->prev = link;
    }

    //point it to old first link
    link->next = head;
    
    //point first to new first link
    head = link;
}

//insert link at the last location
void insertLast(int key, int data) {

    //create a link
    TDListNode *link = (TDListNode*) malloc(sizeof(TDListNode));
    link->key = key;
    link->data = data;
    
    if(isEmpty()) {
        //make it the last link
        last = link;
    } else {
        //make link a new last link
        last->next = link;     
      
        //mark old last node as prev of new link
        link->prev = last;
    }

    //point last to new last node
    last = link;
}

//delete first item
TDListNode* deleteFirst() {

    //save reference to first link
    TDListNode *tempLink = head;
    
    //if only one link
    if(head->next == NULL){
        last = NULL;
    } else {
        head->next->prev = NULL;
    }
    
    head = head->next;
    //return the deleted link
    return tempLink;
}

//delete link at the last location

TDListNode* deleteLast() {
    //save reference to last link
    TDListNode *tempLink = last;
    
    //if only one link
    if(head->next == NULL) {
        head = NULL;
    } else {
        last->prev->next = NULL;
    }
    
    last = last->prev;
    
    //return the deleted link
    return tempLink;
}

//delete a link with given key

TDListNode* delete(int key) {

    //start from the first link
    TDListNode* current = head;
    TDListNode* previous = NULL;
    
    //if list is empty
    if(head == NULL) {
        return NULL;
    }

    //navigate through list
    while(current->key != key) {
        //if it is last node
        
        if(current->next == NULL) {
            return NULL;
        } else {
            //store reference to current link
            previous = current;
            
            //move to next link
            current = current->next;             
        }
    }

    //found a match, update the link
    if(current == head) {
        //change first to point to next link
        head = head->next;
    } else {
        //bypass the current link
        current->prev->next = current->next;
    }    

   if(current == last) {
        //change last to point to prev link
        last = current->prev;
    } else {
        current->next->prev = current->prev;
    }
    
    return current;
}

bool insertAfter(int key, int newKey, int data) {
    //start from the first link
    TDListNode *current = head; 
    
    //if list is empty
    if(head == NULL) {
        return false;
    }

    //navigate through list
    while(current->key != key) {
    
        //if it is last node
        if(current->next == NULL) {
        return false;
        } else {           
         //move to next link
         current = current->next;
        }
    }
    
    //create a link
    TDListNode *newLink = (TDListNode*) malloc(sizeof(TDListNode));
    newLink->key = newKey;
    newLink->data = data;

    if(current == last) {
        newLink->next = NULL; 
        last = newLink; 
    } else {
        newLink->next = current->next;         
        current->next->prev = newLink;
    }
    
    newLink->prev = current; 
    current->next = newLink; 
    return true; 
}

void deleteByVal(int x){
    current = malloc(sizeof(TDListNode));
    if (current == NULL){
        printf("Out of memory\n");
        return;
    }
    
    current = head;
    while(current != NULL){
        if (current->data == x){
            delete(current->key);
            break;
        }
        current = current->next;
    }   
}

int main(void) {

    int value = 10;
    insertFirst(1, value);

    for (int i = 2; i <= 10; i++){
        insertLast(i, value * i);
    }

    displayForward();
    
    int pos = length() / 2;
    insertAfter(pos, 42, 42);
    printf("\nAfter mid insert:");
    displayForward();

    delete(42);
    printf("\nAfter deleting node:");
    displayForward();
    
    deleteBackwards(5);
    printf("\nAfter deleteBackwards:");
    displayForward();

    return 0;
}
