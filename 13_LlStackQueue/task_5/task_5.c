/*
5. Използвайте динамична реализация на стек за въвеждане на поредица от цели положителни
числа и нейното извеждане върху екрана в обратен ред. За край на поредицата от
клавиатурата се въвежда 0.
*/

#include "task_5.h"
#include <stdio.h>
#include <stdlib.h>

stackPtr stacNewPtr = NULL;

int main ()
{
    char option;
    int value;

    printf("1 PUSH\n");
    printf("2 POP\n");
    printf("3 display\n");
    printf("4 EXIT\n");

    while (1)
    {
        option = getchar();
        switch (option)
        {
        case '1':
            printf("\nEnter value");
            scanf("%d",&value);
            push(&stacNewPtr, value);
            
            break;
        case '2':
          if(!checkEmpty(stacNewPtr)){
            printf("Popped value %d\n", pop(&stacNewPtr));
          }
            
            break;
        case '3':
            printValue(stacNewPtr);
        case '4':
            exit(0);
        
        default:
            break;
        }
    }
    
}
