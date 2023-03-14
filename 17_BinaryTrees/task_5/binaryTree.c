#include "task_5.h"

node *createNode(int data){
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return newNode;
}

void inorderTraversal(node *root){
    if (root == NULL){
        return;
    }
    
    inorderTraversal(root->left);
    printf("%d -> ", root->data);
    inorderTraversal(root->right);
}

void preorderTraversal(node *root){
    if (root == NULL){
        return;
    }

    printf("%d -> ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(node *root){
    if (root == NULL){
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d -> ", root->data);
    
}