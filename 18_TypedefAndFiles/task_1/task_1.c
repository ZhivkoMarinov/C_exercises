/*
Създайте текстов файл, в който да запишете следната информация
n - цяло число, даващо броят на хората в група
на следващите n реда да се запишат имената на хората, всяко на нов ред.
*/

#include "task_1.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *inFile = fopen("names.txt", "w");
    if(!inFile){
        printf("Cannot open file!\n");
        return 1;
    }
    
    fclose(inFile);

    int nameNum = 0;
    printf("Enter name count: ");
    scanf("%d", &nameNum);

    writeToFile(nameNum);
    readFromFile(nameNum);

    return 0;
}