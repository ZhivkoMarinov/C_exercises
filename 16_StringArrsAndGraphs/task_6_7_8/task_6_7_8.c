#include "task_6_7_8.h"
#include <stdio.h>

int main(void) {

    int value = 10;
    insertFirst(1, value);

    for (int i = 2; i <= 10; i++){
        insertLast(i, value * i);
    }

    displayForward();
    
    int pos = length() / 2;
    insertAfter(pos, 42, 42);
    printf("\nAfter mid insert:");
    displayForward();

    delete(42);
    printf("\nAfter deleting node:");
    displayForward();

    return 0;
}
