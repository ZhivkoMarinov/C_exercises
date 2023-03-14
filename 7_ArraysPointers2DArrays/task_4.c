/*
Напишете програма, която проверява дали дадена матрица е
identity matrix - матрица с размер (N x N), където само елементите в главния
диагонал са единици, а всички останали елементи са нули.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int** init(int row, int col);

int** initManual(int row, int col);

void printMatrix(int **arr, int row, int col);

bool isIdentity(int **arr, int row, int col);

void freeArr(int **arr, int row);

int main()
{   
    srand(time(0));
    int row = 0, col = 0, num = 0;
    printf("Number of rows and cols = ");
    scanf("%d", &num);
    
    row = num;
    col = num;
        
    int counter = 0;
    while(1){

        counter++;
        int **arr = init(row, col);
        //int **arr = initManual(row, col);

        printf("\n");
        printMatrix(arr, row, col);        
        
        if (isIdentity(arr, row, col)){
            printf("Matrix %d is identity matrix\n", counter);
            freeArr(arr, row);
            break;
        }
        printf("Not an identity matrix\n");
        freeArr(arr, row);
    }
    
    return 0;
}

int** init(int row, int col){
    
    int **arr;
    arr = (int**)malloc(sizeof(int *) * row);  // memory for {row} count pointers. 
    
    for(int i = 0; i< row; i++) {
        
        arr[i] = (int *)malloc(sizeof(int) * col); // memory for sub-pointer of size {col} ints.
        
        for(int j = 0; j < col; j++) {
            arr[i][j] = rand() % 2;
            
        }
    }
    return arr;
}

int** initManual(int row, int col){
    int **arr;
    arr = (int**)malloc(sizeof(int *) * row);
    
    for(int i = 0; i < row; i++) {
        
        arr[i] = (int *)malloc(sizeof(int) * col);
        
        for(int j = 0; j < col; j++) {
            printf("Enter [%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);            
        }
    }
    return arr;
}

bool isIdentity(int **arr, int row, int col){
    
    for (int i = 0; i < row; i++){
        if (!arr[i][i]){
            return false;
        }
        arr[i][i] = 0; //bravely pretend its not lame!
    }
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (arr[i][j]){
                return false;
            }
        }
    }
    return true;
}

void freeArr(int** arr, int row){
    for (int i = 0; i < row; i++){
            free(arr[i]);
        }
        free(arr);
}

void printMatrix(int **arr, int row, int col){
    
    for (int i = 0; i < row; i++){
        
        for (int j = 0; j < col; j++){
            
            printf("%d ", arr[i][j]);
            
            if (j == col - 1){
                printf("\n");
            }
        }
    }
}