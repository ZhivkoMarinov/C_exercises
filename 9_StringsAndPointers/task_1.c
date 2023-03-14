/*
Напишете C програма за намиране на дължината на низ с помощта на цикъл, без да
използвате вградена библиотечна функция strlen() .
*/
 
#include <stdio.h>
#include <stdlib.h>
 
#define MAX_SIZE 50
 
int stringLen(char*);
 
int main()
{
    char text[MAX_SIZE];
    fgets(text, MAX_SIZE, stdin);
    //scanf("%s", text);
 
    printf("String length = %d chars\n", stringLen(text));
 
    return 0;
}
 
int stringLen(char* str){
 
    int counter = 0;
    // until '\n' for fgets() or '\0' for scanf() 
    while(str[counter] != '\n'){
        counter++;
    }
    return counter;
}