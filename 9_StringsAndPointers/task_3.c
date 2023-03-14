/*
Напишете C програма за сравняване на два низа, използвайки цикъл символ по символ, без
да използвате вградена библиотечна функция strcmp() .
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
#define MAX_SIZE 50
 
bool isEqual(char*, char*);
 
int main()
{
    char* text = (char*)malloc(MAX_SIZE);
    scanf("%s", text);

    char* text2 = (char*)malloc(MAX_SIZE);
    scanf("%s", text2);
 
    if (isEqual(text, text2)){
        printf("Strings are equal.\n");
    }else{
        printf("Strings are not equal.\n");
    }
 
    free(text);
    free(text2);
 
    return 0;
}
 
bool isEqual(char* str1, char* str2){
 
    if (strlen(str1) != strlen(str2)){
        return false;
    }
 
    for (int i = 0; i < strlen(str1); i++){
        if (str1[i] != str2[i]){
            return false;
        }  
    }
    return true;
}