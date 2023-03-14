/*
Напишете функция, с която да вмъкнете възел „t“ преди възел, 
посочен с „X“ в единичен свързан списък „L“.
*/

#include "task_2.h"

int main(void)
{   

    srand(time(NULL));

    Node *head = NULL;
    
    for (int i = 0; i < 10; i++){
        append(&head, (rand() % 20));    
    }
    printList(head);
    insertBeforePos(&head, 42, 4);
    printList(head);

    return 0;
}