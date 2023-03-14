#include "task_20.h"

int** transposeArr(int *arr){

    int **result = malloc(sizeof(int*) * COL);

    for (int i = 0; i < ROW; i++){
        result[i] = malloc(sizeof(int) * ROW);
    }


    for (int i = 0; i < ROW; i++){

        for (int j = 0; j < COL; j++){

            result[j][i] = arr[i * COL + j];
        }
    }

    return result;
}
