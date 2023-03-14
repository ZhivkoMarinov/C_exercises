/*
В текстов файл има текст с букви и цифри. Напишете програма, която чете
файла и извежда само цифрите от файла.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

    while(fgets(buffer, sizeof(buffer), inFile)){

		for (int i = 0; i < strlen(buffer); i++){

			if (buffer[i] >= 48 && buffer[i] <= 57){
				printf("%c", buffer[i]);
			}
		}
        printf("\n");
	}

    fclose(inFile);

    return 0;
}
