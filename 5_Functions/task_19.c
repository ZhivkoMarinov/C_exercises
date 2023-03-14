/*
Да се напише рекурсивна функция
int numPrint(int n),
С помощта на която се отпечатват всички естествени числа до 100.
*/

#include <stdio.h>

int numPrint(int n){
    if(n <= 100){
        printf("%d\n", n);
        n++;
        return numPrint(n);
    }
}

int main(){	
	
    numPrint(1);
	
}