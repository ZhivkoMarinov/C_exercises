/*
Напишете програма на C, за да проверите дали даден низ е палиндром или не, без да
използвате цикъл.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 50

void myStrrev(char*); //the built-in strrev is not working because of the compiler or the OS or whatever....

int main()
{    

    char str[MAX_SIZE];
    //fgets(str, MAX_SIZE, stdin);
    scanf("%s", str);

    char reverseStr[MAX_SIZE];
    strcpy(reverseStr, str);
    myStrrev(reverseStr);

    if (strcmp(str, reverseStr)){
        printf("Not a palindrome\n");
    }else{
        printf("Palindrome\n");
    }

    return 0;
}

void myStrrev(char* str){
    
    char temp;

    for (int i = 0; i < strlen(str) / 2; i++){
        temp = str[i];
        str[i] = str[(strlen(str) - 1) - i];
        str[(strlen(str) - 1) - i] = temp;
    }
}