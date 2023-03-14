/*
Да предположим, че подреден списък L = (l0, l1, …..,ln) е представен от единичен свързан
списък. Добавете списъка L = (ln, l0, l1, ….., ln) след друг подреден списък M, представен от
единично свързан списък
*/

#include "task_4.h"

int main(void)
{   

    Node *head1 = NULL;
    Node *head2 = NULL;
    
    for (int i = 1; i <= 10; i++){
        
        if (i <= 7){
            append(&head1, i);
        }
        append(&head2, i);            
    }

    printList(head1);
    printList(head2);
    concatLists(&head1, &head2);
    printList(head1);

    return 0;
}