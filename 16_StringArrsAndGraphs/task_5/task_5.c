/*
Задача 5. Напишете C програма за намиране на всички срещания на
символ в низ.
*/

#include <stdio.h>

int main(void){

    char test[100] = "JAsn#@Kj 98#@@JkasdJ LLkds*@#dklsa";
    char needle = '@';
    int count = 0;

    char *strPtr = test;
    
    while(*strPtr){

        if (*strPtr == needle){
            count ++;
        }
        strPtr ++;
    }

    printf("%d\n", count);

    return 0;
}