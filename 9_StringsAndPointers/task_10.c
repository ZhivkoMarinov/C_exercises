/*
Напишете C програма за премахване на всички срещания на дадена дума в низ с помощта
на цикъл.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

char* delWord(char*, char*, char*);

int main()
{
    char str[][SIZE] = {
                        "opia word  salk ; k word dsal;k words word",
                        "dsadsa word skjkaae word word salk wording",
                        "word qwqpopo word hgfwordwoqp word kdsla word"
                        };
    
    char word[SIZE / 2] = "word";
    char delimiter[] = " ";
    
    size_t len = sizeof(str) / sizeof(str[0]);
    
    for (int i = 0; i < len; i++){
        printf("%s\n", delWord(str[i], word, delimiter));
    }
    
    return 0;
}

char* delWord(char* haystack, char* needle, char* delimiter){
    
    char* ptr = strtok(haystack, delimiter);
    
    char* result = (char*) malloc(SIZE); 
    
    while (ptr){
        
        if (strcmp(ptr, needle) != 0){
            
            strcat(result, ptr);
            strcat(result, delimiter);
        }
        ptr = strtok(NULL, delimiter);
    }
    
    return result;
}
