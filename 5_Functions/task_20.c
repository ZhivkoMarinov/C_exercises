/*
Напишете програма на C за броене на цифрите на дадено число с
помощта на рекурсивна функция.
*/

#include <stdio.h>


int digit_counter(int n, int counter){
    if(n == 0){
        return counter;
    }
	
    return digit_counter(n / 10, ++counter);
}

int main(){	
	
    int num;
    int counter = 0;
    printf("Enter num = ");
    scanf("%d", &num);
    printf("%d\n", digit_counter(num, counter));
	
}