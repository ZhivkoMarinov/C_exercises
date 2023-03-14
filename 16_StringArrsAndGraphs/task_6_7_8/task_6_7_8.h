#ifndef TASK_6_7_8_H
#define TASK_6_7_8_H

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



bool isEmpty();

int length();

void displayForward();

void insertFirst(int key, int data);

void insertLast(int key, int data);

TDListNode* deleteFirst();

TDListNode* delete(int key);

TDListNode* deleteLast();

bool insertAfter(int key, int newKey, int data);

void deleteByVal(int x);

#endif