#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void numInput(int*, int*);

int menu(void);

void fnPlus(int, int);

void fnMinus(int, int);

void fnMultiply(int, int);

void fnDevide(int, int);

int main(){

    int choice = menu();
    int x = 0, y = 0; 

    void (*func_ptr[])(int, int) = {fnPlus, fnMinus, fnMultiply, fnDevide};
    
    func_ptr[choice - 1](x, y);

    return 0;
}

int menu(void){

    int choice = 0;

    do{
        printf("Choose operation:\n");
        printf("1 -> Аddition\n2 -> Subtraction\n3 -> Multiplication\n4 -> Devision\nchoice = ");
        scanf("%d", &choice);
    }while(choice < 1 || choice > 4);
    
    return choice;
}

void numInput(int* a, int* b){
    printf("A = ");
    scanf("%d", a);

    printf("B = ");
    scanf("%d", b);
}

void fnPlus(int a, int b){
    numInput(&a, &b);
    printf("result = %d\n", a + b);
}

void fnMinus(int a, int b){
    numInput(&a, &b);
    printf("result = %d\n", a - b);
}

void fnMultiply(int a, int b){
    numInput(&a, &b);
    printf("result = %d\n", a * b);
}

void fnDevide(int a, int b){
    numInput(&a, &b);
    printf("result = %f\n", (double)a / b);
}