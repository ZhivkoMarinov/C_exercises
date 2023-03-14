/*
Напишете функция, с която да да изтриете възел,
посочен с „p“ от едносвързан списък „L“.
*/

#include "task_3.h"

int main(void)
{   

    srand(time(NULL));

    Node *head = NULL;
    
    for (int i = 0; i < 10; i++){
        append(&head, (rand() % 20));    
    }
    printList(head);
    deletePos(&head, 8);
    printList(head);

    return 0;
}