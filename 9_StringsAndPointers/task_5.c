/*
Напишете C програма за намиране на символа с най-висока честота в низ с помощта на
цикъл.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 50

char mostCommonChar(char*);

int main()
{    

    char str[MAX_SIZE];
    //fgets(str, MAX_SIZE, stdin);
    scanf("%s", str);

    char result = mostCommonChar(str);

    printf("%c\n", result);

    return 0;
}

char mostCommonChar(char* str){

    char result;
    int counter = 0;
    int temp_counter = 0;

    for (int i = 0; i < strlen(str); i++){
        
        for (int j = i + 1; j < strlen(str); j++){

            if (str[i] == str[j]){
                temp_counter++;
            }
        }

        if (temp_counter > counter){
            counter = temp_counter;
            result = str[i];
        }

        temp_counter = 0;
    }

    return result;
}