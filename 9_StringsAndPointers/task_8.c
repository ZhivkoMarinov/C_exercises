/*
Напишете C програма за премахване на допълнителните интервали и празни места от низ.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_SIZE 50
 
char* strip(char*);

void delExtraS(char*);
 
int main()
{    
 
    char str[100];        
    fgets(str, MAX_SIZE, stdin);
    
    char* clean_str = strip(str);
    delExtraS(clean_str);
    printf("%s\n", clean_str);
    
    free(clean_str);

    return 0;
}
 
char* strip(char* str){
 
    char* result = (char*) malloc(strlen(str));
 
    int start_index = 0;
    int end_index = strlen(str) - 2; // -1 for the '\0' and another -1 to be used as last index
 
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

void delExtraS(char* str){
    
    int len = strlen(str);
 
    for(int i = 0; i < len; i++)
    {
        if (str[i] == ' ' && str[i + 1] == ' '){
 
            for(int j = i; j < len - 1; j++){
                str[j] = str[j + 1];
            }
 
            len--;
            str[len] = '\0';
            i = 0;
        }
    }
}
