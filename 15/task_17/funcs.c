#include "task_17.h"

void push(stack *stack1, char *string)
{
    node *tmp = malloc(sizeof(node));
    tmp->next = NULL;
    strcpy(tmp->string, string);

    if (stack1->start == NULL &&
        stack1->top == NULL)
    {
        stack1->start = tmp;
        stack1->top = tmp;
    }
    else
    {
        stack1->top->next = tmp;
        stack1->top = tmp;
    }
}

void fillStackGetLengthPrint(stack *stack1)
{
    int length = 0;
    char string[50];
    do
    {
        printf("Enter word:\n");
        scanf("%s", string);
        
        push(stack1, string);

        length += strlen(string);
        
    } while (length <= 200);
    
    printf("The word is: %s\n", stack1->top->string);
    printf("Total length: %d", length);
}

struct stack *stackInit()
{
    stack *tmp = malloc (sizeof(stack));
    tmp->start = NULL;
    tmp->top = NULL;

    return tmp;
}