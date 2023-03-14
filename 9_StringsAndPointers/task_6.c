/*
Напишете C програма за премахване на всички повтарящи се символи в низ с помощта на
цикли.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 50

void removeReps(char*);

int main()
{    

    char txt[MAX_SIZE];
    scanf("%s", txt);

    removeReps(txt);
    
    printf("%s\n", txt);

    return 0;
}

void removeReps(char* str){

    for (int i = 0; i < strlen(str); i++){
        
        for (int j = i + 1; str[j] != '\0'; j++){

            if (str[i] == str[j]){

                for (int k = j; str[k] != '\0'; k++){

                    str[k] = str[k + 1];
                }
            }
        }
    }
}
