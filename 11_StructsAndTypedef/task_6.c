/*
Напишете собствен тип за структура node, съдържаща
един член от тип int и един указател към тип самата структура. Заделете
динамично памет за масив от 10 елемента от тази структура с malloc. За
всеки елемент от масива попълнете цялото число с неговия пореден номер.
Принтирайте резултатите.
*/
 
#include <stdio.h>
#include <stdlib.h>
 
struct node{
    int data;
    struct node *next;
};

typedef struct node node;

void createList(node *, int);

void printList(node *);

int main(void)
{   
    int node_count = 10;
    node *nodeArr = (node*) malloc(sizeof(*nodeArr) * node_count);

    createList(nodeArr, node_count);

    printList(nodeArr);
    
    return 0;
}

void createList(node *nodeArr, int node_count){

    for (int i = 0; i < node_count; i++){
        nodeArr[i].data = i + 1;
    }

    for (int i = 0; i < node_count - 1; i++){
        nodeArr[i].next = &nodeArr[i + 1];
    }
    
    nodeArr[node_count - 1].next = NULL;
}

void printList(node* nodeArr){
    for (int i = 0; nodeArr[i].next != NULL; i++){
        printf("%d\n", nodeArr[i].data);
    }
}