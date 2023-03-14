#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fnPlus(int, int);

int fnMinus(int, int);

int fnMultiply(int, int);

int fnDevide(int, int);

char getSign(void);

void numInput(int*, int*);

int main(){

    char sign = getSign();
    int x = 0, y = 0;
    printf("A = ");
    scanf("%d", &x);

    printf("B = ");
    scanf("%d", &y);

    int (*pfCalc)(int, int) = NULL;

    switch(sign){
        case '+': pfCalc = fnPlus; break;
        case '-': pfCalc = fnMinus; break;
        case '*': pfCalc = fnMultiply; break;
        case '/': pfCalc = fnDevide; break;
    }

    int result = pfCalc(x, y);
    printf("result = %d\n", result);

    return 0;
}

char getSign(void){
    char sign;

    do{
        printf("Operation sign: ");
        scanf("%c", &sign);        

    }while(sign != '+' && sign != '-' && sign != '*'&& sign != '/');
    
    return sign;
}

int fnPlus(int a, int b){
    return (a + b);
}

int fnMinus(int a, int b){
    return (a - b);
}

int fnMultiply(int a, int b){
    return (a * b);
}

int fnDevide(int a, int b){
    return (a / b);
}