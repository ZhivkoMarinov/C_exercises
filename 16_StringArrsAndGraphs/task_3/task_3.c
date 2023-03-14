/*
Задача 3. Напишете C програма за преброяване на броя на
думите в низ.
*/

#include <stdio.h>
#include <string.h>

int main(void){

    char test[100] = "tatafaf dsa dsa sad asd dssa";

    int wordCount = 0;
    char *token = strtok(test, " ");
    
    while(token){
        wordCount ++;
        token = strtok(NULL, " ");
    }

    printf("%d\n", wordCount);

    return 0;
}