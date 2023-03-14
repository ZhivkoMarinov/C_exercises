/*
Вдигнете всички битове на 32 битово число,
на позиции делящи се на 3.
*/

#include <stdio.h>
#include <stdlib.h>

void raiseBit(int*, int*, int, int);

int countBits(int);

int main()
{   

    int x[] = {3917, 91229, 17003};
    int expected[] = {3949, 93565, 19311};

    /*
    1111 0100 1101 = 3917
    1111 0011 1101 = 3949(expected)

    1 0110 0100 0101 1101 = 91229
    1 0110 1101 0111 1101 = 93565(expected)

    0100 0010 0110 1011 = 17003
    0100 1011 0110 1111 = 19311(expected)
    */

    for (int i = 0; i < 3; i++){
        int size = countBits(x[i]);
        raiseBit(&x[i], &expected[i], size, 3);
    }
    
    return 0;
}

void raiseBit(int* num, int* expected, int size, int modulo){

    for (int i = 0; i < size; i++){
        if ((i % modulo == 0) && i > 0){
            *num |= (1 << i - 1);
        }
    }
    printf("%d ", *num);
    (*num == *expected) ? printf("true\n") : printf("false\n");
}

int countBits(int num){

   int counter = 0;

   while (num){

        num >>= 1;
        counter++;
    }
    
    return count;
}