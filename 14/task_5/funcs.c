#include "task_5.h"

double* percent(int *arr){
    
    int positive = 0, negative = 0, zero = 0;
    
    for (int i = 0; i < LEN; i++){
        
        if (arr[i] > 0){
            positive++;
        }
        else if (arr[i] < 0){
            negative++;
        }
        else {
            zero++;
        }
    }
    
    double *result = malloc(sizeof(double) * 3);
    result[0] = (double) positive / LEN;
    result[1] = (double) negative / LEN;
    result[2] = (double) zero / LEN;
    
    return result;
}

void display(double *arr){
    
    for (int i = 0; i < 3; i++){
        printf("%0.6lf\t", arr[i]);
    }
    printf("\n");
}