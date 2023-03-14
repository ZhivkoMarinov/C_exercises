/*
Напишете функция, с която да разделите даден едносвързан свързан списък от цели числа, в
два списъка по следния начин.
Ако първоначалният списък е L = (l0, l1, ….., ln), то
новополучените списъци мжгот до са R1 = (l0, l2, l4, …..) и R2 = (l1, l3, l5, …..)
*/

#include "task_1.h"

int main(void){

    List *start_base = NULL;
    List *start_even = NULL;
    List *start_odd = NULL;
    
    for (int i = 0; i <= 20; i++){
        List *node = malloc(sizeof(List));
        createNode(node, i);
        insertFirst(&start_base, node);
    }

    splitList(&start_base, &start_even, &start_odd);

    printf("Base list: ");
    displayList(&start_base);
    
    printf("Even list: ");
    displayList(&start_even);

    printf("Odd list: ");
    displayList(&start_odd);

    return 0;
}