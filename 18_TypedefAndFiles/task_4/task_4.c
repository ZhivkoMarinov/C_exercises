/*
Напишете програма, която чете текстов файл с думи и отпечатва тези
от тях, които са палиндроми – четени отпред-назад и обратно са
еднакви.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(char *str);

int main(int argc, char **argv){

    if (argc != 2){
        printf("Invalid arguments\n");
        return 1;
    }
    
    FILE *inFile = fopen(argv[1], "r");

    if (!inFile){
        printf("Cannot open file\n");
        return 1;
    }

    char buffer[100] = {0};

    while(fgets(buffer, 100, inFile)){

        buffer[strlen(buffer) - 1] = '\0';
        if (isPalindrome(buffer)){
            printf("%s is a palindrome\n", buffer);
        }
        else{
            printf("%s is not a palindrome\n", buffer);
        }        

    } 

    fclose(inFile);

    return 0;
}

bool isPalindrome(char *str){

    for (int i = 0; i < strlen(str) / 2; i++){
        if (str[i] != str[strlen(str) - 1 - i]){
            return false;
        }
    }
    return true;
    
}