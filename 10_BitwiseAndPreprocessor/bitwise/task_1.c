/*
Намерете позицията на най-старшия бит, който е
със стойност 1 в дадено число.
*/

#include <stdio.h>
#include <stdlib.h>

int mostSignificantBit(int);

int main()
{   
    int x = 91; // 0101 1011
    
    printf("msb index in binary %d = %d\n",x ,mostSignificantBit(x));

    return 0;
}

int mostSignificantBit(int num){

    int result = 0;

    for (int i = 0; i < 32; i++){
        if (num % 2 != 0){
            result = i;
        }
        num >>= 1;
    }
    return result;
};