/*
Задача 4. Напишете C програма за броене на главни, малки и специални
символи в низ.
*/

#include <stdio.h>

int main(void){

    char test[100] = "JAsn#@Kj 98#@@JkasdJ LLkds*@#dklsa";
    int capital = 0;
    int small = 0;
    int special = 0;

    char *strPtr = test;
    
    while(*strPtr){
        
        if (*strPtr == ' '){
            strPtr ++;
            continue;
        }

        if (*strPtr >= 65 && *strPtr <= 90){
            capital ++;
        }

        else if (*strPtr >= 97 && *strPtr <= 122){
            small ++;
        }

        else {
            special ++;
        }
        strPtr ++;
    }
    
    printf("capital letters = %d\nsmall letters = %d\nspecial and numbers = %d\n", capital, small, special);
    return 0;
}