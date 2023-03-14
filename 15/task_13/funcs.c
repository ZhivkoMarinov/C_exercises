#include "task_13.h"
 
Stack *init(){
    Stack * currentNode =(Stack*)malloc(sizeof(Stack));
    currentNode->top=NULL;
 
    return currentNode;
}
 
void push(struct Stack * currentStack,int data){

    struct stackNode * tmp = (stackNode*)malloc(sizeof(stackNode));
    tmp->data=data;

    if(currentStack->top==NULL){
        currentStack->top=tmp;
        tmp->prev=NULL;
 
        return;
    }

    tmp->prev=currentStack->top;
    currentStack->top=tmp;
}
 
void pop(struct Stack * currentStack){

    struct stackNode * tmp = currentStack->top;

    if(currentStack==NULL){
        printf("The stack is empty");
        return;
    }

    currentStack->top=tmp->prev;
    free(tmp);
}
 
void display(struct Stack * currentStack){
    
    struct stackNode * tmp = currentStack->top;
    
    while(tmp!=NULL){
        printf("%d ",tmp->data);
        tmp=tmp->prev;
    }
    printf("\n");
}

void changeStackValue(Stack* sourceStack, int elements, int position, int newData){

    stackNode *temp = sourceStack->top;    

    for (int i = 0; i < elements - position; i++){
        temp = temp->prev;                
    }

    temp->data = newData;

}

void run(){

    Stack *newStack = init();    

    int elements = 0;
    printf("Enter elements count: ");
    scanf("%d", &elements);

    int position = 0;
    printf("Backward stack position to change: ");
    scanf("%d", &position);

    int newData = 0;
    printf("New value: ");
    scanf("%d", &newData);

    for (int i = 0; i < elements; i++){
        push(newStack, rand() % 20);
    }

    printf("Before change: ");
    display(newStack);

    changeStackValue(newStack, elements, position, newData);

    printf("After change: ");
    display(newStack);

}