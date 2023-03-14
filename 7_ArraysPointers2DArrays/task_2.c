/*
Напишете програма, която събира две матрици (4х4) и записва
резултата в трета такава със същия размер. Събирането на матриците става като
намерим сумата на съответстващите елементи в тях. Данните за изходните матрици
трябва да бъдат въведени от потребителя. Разпечатайте трите матрици в конзолата.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define ROW 4
#define COL 4

void printArr(int arr[][COL], int row, int col);

int main()
{   
 
    srand(time(0));
    int matrix1[ROW][COL];
    int matrix2[ROW][COL];
    int matrixSum[ROW][COL];
 
    for (int r = 0; r < ROW; r++){
        for (int c = 0; c < COL; c++){
            matrix1[r][c] = rand() % 20;
            matrix2[r][c] = rand() % 20;
            matrixSum[r][c] = matrix1[r][c] + matrix2[r][c];
        }
    }

    printArr(matrix1, ROW, COL);
    printArr(matrix2, ROW, COL);
    printArr(matrixSum, ROW, COL);

    return 0;
}

void printArr(int arr[][COL], int row, int col){

    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            
            printf("%d\t", arr[r][c]);
            if (c == col - 1){
                printf("\n");
            }
        }
    }
    printf("\n");
}