/*
Напишете програма, която да премахва всички коментари в
една С програма.
*/

// todo separate functions for single and multi line comments and print function.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deleteComments(FILE*);

int main(void){

    FILE* stream;

    stream = fopen("example.txt", "r");

    deleteComments(stream);    
    
    fclose(stream);

    return 0;
}

void deleteComments(FILE* stream){
    char singleChar;
    char nextChar;

    while(!feof(stream)){

        char buffer[1024] = "\0";
        singleChar = fgetc(stream);

        // comment found
        if (singleChar == '/'){

            char nextChar = fgetc(stream);

            // if it is a singleLine comment
            if (nextChar == '/'){

                do{
                    singleChar = fgetc(stream);
                }while(singleChar != '\n');
            }

            // if it is a multiLine comment 
            if (nextChar == '*'){

                do{
                    singleChar = fgetc(stream);
                }while(singleChar != '/');
            }
        }

        if (singleChar != '/'){
            putchar(singleChar);
        }
    }
}