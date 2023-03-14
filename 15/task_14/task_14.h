#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct LinkedList{
    Node *head;
}LinkedList;

#define SIZE 11

LinkedList* init();

void insertLast(LinkedList *, int);
void display(LinkedList *);
void deleteByVal(LinkedList *, int);

void deleteOddSeq(LinkedList *);
void bubbleSort(int *, int);
void swap(int *, int *);
void run(int *arr);
