#ifndef TASK_6_H
#define TASK_6_H

#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data);

void printInorder(struct node* node);

// A utility function to merge two sorted arrays into one
int *merge(int arr1[], int arr2[], int m, int n);

// A helper function that stores inorder traversal of a tree in inorder array
void storeInorder(struct node* node, int inorder[], int *index_ptr);

/* A function that constructs Balanced Binary Search Tree from a sorted array */
struct node* sortedArrayToBST(int arr[], int start, int end);

struct node* mergeTrees(struct node *root1, struct node *root2, int m, int n);

#endif