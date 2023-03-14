/*
Обърнете битовете на число, които се намират на
нечетна позиция
*/

#include <stdio.h>
#include <stdlib.h>

void oddBitsFlip(int*, int*, int);

int countBits(int);

int main()
{   

    int x[] = {3917, 91229, 17003};
    int expected[] = {2584, 78088, 22334};

    /*
    1111 0100 1101 = 3917
    1010 0001 1000 = 2584(expected)                             

    1 0110 0100 0101 1101 = 91229
    0 0011 0001 0000 1000 = 78088(expected)

    0100 0010 0110 1011 = 17003
    0001 0111 0011 1110 = 22334(expected)
    */
    for (int i = 0; i < 3; i++){
        int size = countBits(x[i]);
        oddBitsFlip(&x[i], &expected[i], size);
    }
    
    return 0;
}

void oddBitsFlip(int* num, int* expected, int size){

    for (int i = 0; i < size; i++){
        if ((i % 2 != 0) && (i > 0)){
            *num ^= (1 << i - 1);
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
