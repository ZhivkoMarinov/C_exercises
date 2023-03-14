/*
Функция, която по зададени граници на интервал [a,b] , намира и
извежда сумата от четните числа от този интервал.
*/

#include <stdio.h>

int evenSum(int start, int end){
    
    int sum = 0;
    
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    
    return sum;
}

int main(){	
	
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    printf("Sum of even numbers in range [%d, %d] = %d\n", a, b, evenSum(a, b));	
}
