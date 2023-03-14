/*
Напишете C програма за свързване на два низа в един низ, без да използвате библиотечна
функция strcat().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_SIZE 50
 
int main()
{
    char* text = (char*)malloc(MAX_SIZE * 2);
    scanf("%s", text);
 
    char* text2 = (char*)malloc(MAX_SIZE);
    scanf("%s", text2);
 
    for (int i = 0; i < strlen(text2); i++){
        text[strlen(text)] = text2[i];  
    }
 
    printf("%s\n", text);
 
    free(text);
    free(text2);
 
    return 0;
}