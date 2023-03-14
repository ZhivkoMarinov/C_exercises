/*
Намерете броя на позициите на битовете, в които две
числа се различават
*/

#include <stdio.h>
#include <stdlib.h>

void bitDifferenceCount(int*, int*, int*);

int main()
{   

    int x[] = {3917, 91229, 17003};
    int y[] = {7729, 5804, 999};

    int expected[] = {7, 10, 5};

    for (int i = 0; i < 3; i++){
        bitDifferenceCount(&x[i], &y[i], &expected[i]);
    }
    return 0;
}

void bitDifferenceCount(int* x, int* y, int* expect){
    int difference = *x ^ *y;
    int counter = 0;

    for (int i = 0; i < 32; i++){
        int temp = difference;
        if ((temp >> i) & 1){
            counter++;
        } 
    }
    (counter == *expect) ? printf("true\n") : printf("false\n");
}
