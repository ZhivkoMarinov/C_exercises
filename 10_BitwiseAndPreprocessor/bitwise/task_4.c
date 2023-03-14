/*
Разбийте число като сума от степени на
двойката.
*/

#include <stdio.h>
#include <stdlib.h>

void powerSum(unsigned char*);

int main()
{   
    // 0 - 255
    unsigned char x = 87; // 0101 0111

    powerSum(&x);

    return 0;
}

void powerSum(unsigned char *num){

    for (int i = 7; i >= 0; i--){

        unsigned char temp = *num;
        temp >>= i;
        temp &= 1;
        printf("(%d x 2**%d)", temp, i);

        if (i > 0){
            printf(" + ");
        }
    }
    printf("\n");
}