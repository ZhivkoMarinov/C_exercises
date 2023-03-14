#ifndef TASK_5_H
#define TASK_5_H

#include <stdio.h>
#include <stdlib.h>

// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

node *createNode(int data);

void inorderTraversal(node *root);

void preorderTraversal(node *root);

void postorderTraversal(node *root);

#endif