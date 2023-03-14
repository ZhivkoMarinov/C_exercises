#include <stdio.h>
#include <stdlib.h>

void checkPrime(int num){
    
    if (num == 0 || num == 1){
        printf("0 and 1 are not prime numbers\n");
        return;
    }
    
    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            printf("Not a prime number\n");
            return;
        }
    }
    printf("Prime number\n");
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int nod(int x, int y) {
    while (x != y) {
        if (x < y) {
            swap(&x, &y);
        }
        x -= y;
    }
    return x;
}

int main(void){
    
    int x = 1468;
    int y = 224;
    
    int result = nod(x, y);
    printf("NOD is %d\n", result);
   
	return 0;
}