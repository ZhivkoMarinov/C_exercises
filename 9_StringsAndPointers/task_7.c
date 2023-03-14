/*
Напишете C програма за отрязване както на водещите, така и на крайните символи за
празно пространство в низ с помощта на цикъл.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_SIZE 50

char* trim(char*);

int main()
{    

    char str[MAX_SIZE];
    fgets(str, MAX_SIZE, stdin);

    char* result = trim(str);
    
    printf("%s\n", result);
    printf("Length is %ld chars\n", strlen(result));

    free(result);

    return 0;
}

char* trim(char* str){

    char* result = (char*) malloc(strlen(str));

    int start_index = 0;
    int end_index = strlen(str) - 2; // -1 for the '\0' and another -1 so end_index is last str index

    while(str[start_index] == ' '){
        start_index++;
    }

    while(str[end_index] == ' '){
        end_index--;
    }

    for (int i = 0; i < (end_index - start_index + 1); i++){
        result[i] = str[start_index + i]; 
    }

    return result;
}