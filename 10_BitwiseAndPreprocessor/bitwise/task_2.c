/*
 Направете на нула битовете в числа, намиращи се на
позиции между 3 и 7
*/

#include <stdio.h>
#include <stdlib.h>

void clearBit(int*, int, int);

int main()
{   
    int x = 255;
    int start = 3;
    int end = 7;

    clearBit(&x, start, end);
    printf("%d\n", x);

    return 0;
}

void clearBit(int *num, int start, int end){
    /* 
    1111 1111 (255)
   &
    1111 0111 (~1 left shifted to 4th pos)
   ___________
    1111 0111 (result after the first iter)

    1100 0111 (after the last iter - 199)
    */

    for (int i = start; i < end - 1; i++){
        *num &= ~(1 << i);
    }
}