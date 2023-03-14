#include "task_9.h"

parenth* createNode(char data){

    parenth *newnode = malloc(sizeof(parenth));

    newnode->data = data;
    newnode->ptr = NULL;

    return newnode;
}

void push(parenth **top, char data){
    
    parenth *newnode = createNode(data);
    
    if (newnode == NULL){
        printf("No memory!");
        return;
    }

    if (*top == NULL){        
        *top = newnode;
        return;
    }

    newnode->ptr = *top;
    *top = newnode;    
}

void pop(parenth **top){

    if (*top == NULL){
        printf("Nothing to delete, stack is empty!");
        return;
    }

    parenth *temp = *top;
    temp = temp->ptr;
    *top = temp;
}

void display(parenth *front)
{
    parenth *temp;
    if (front == NULL){
        printf("Empty Stack\n");
    }
    else {
        
        temp = front;
        printf("Elements in the Stack are: ");
        
        while(temp != NULL ){

            printf("%c ", temp -> data);
            temp = temp -> ptr;
        }
        printf("\n");
    }
}

bool check(char *str){    
    
    parenth *top = NULL;

    // '<=' because +1 iter to \0 is the easiest way to reach "Empty Stack" in display(top) 
    for (int i = 0; i <= strlen(str); i++){

        display(top);
               
        switch (str[i]){
            case '{' : push(&top, str[i]); break;
            case '[' : push(&top, str[i]); break;
            case '(' : push(&top, str[i]); break;

            case '}':
                if (top->data != '{'){
                    return false;
                }
                pop(&top);
                break;

            case ']':
                if (top->data != '['){
                    return false;
                }
                pop(&top);
                break;

            case ')':
                if (top->data != '('){
                    return false;
                }
                pop(&top);
                break;
        }    
    }
    return true;
}