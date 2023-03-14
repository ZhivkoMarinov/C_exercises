#include "task_1.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void writeToFile(int nameNum){

    FILE *filePtr = fopen("names.txt", "a");

    if (!filePtr){
        printf("Could not open file.\n");
        return;
    }    

    fprintf(filePtr, "%d %c", nameNum, '\n');

    for (int i = 0; i < nameNum; i++){
        char name[20] = {0};
        scanf("%s", name);
        //name[strlen(name) - 1] = '\0';        
        fprintf(filePtr, "%s %c", name, '\n');
    }

    fclose(filePtr);
}

void readFromFile(int nameNum){

    printf("\n_____________\n");

    FILE *filePtr = fopen("names.txt", "r");

    if (!filePtr){
        printf("Could not open file.\n");
        return;
    }

    char buffer[20] = {0};
    for (int i = 0; i <= nameNum; i++){

        fscanf(filePtr, "%s", buffer);

        if (buffer[0] == 'A'){
            printf("%s\n", buffer);
        }
    } 
}