#include "task_6_7_8.h"

//this link always point to first Link
TDListNode *head = NULL;

//this link always point to last Link 
TDListNode *last = NULL;

TDListNode *current = NULL;

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