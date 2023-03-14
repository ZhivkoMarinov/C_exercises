/*
Напишете програма, която да брои колко пъти се среща едно число в даден масив
от цели числа. Масивът трябва да бъде въведен от клавиатурата. Принтирайте
резултатите.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 
#define SIZE 6
 
// nerd way
 
int repCount(int arr[], int size, int target);
 
bool isInside(int source[], int size, int target);
 
int main()
{
    int arr[SIZE] = {0};
    int *ptr = NULL;
    int ptrSize = 0;
 
    for (int i = 0; i < SIZE; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);    
    }
 
    for (int i = 0; i < SIZE; i++){
 
        int reps = repCount(arr, SIZE, *(arr + i));
 
        if (reps > 1){
 
            if (ptr == NULL){
                ptr = (int*) calloc(1, sizeof(int));
            } else {
                ptr = realloc(ptr, sizeof(int));
            }
 
            if (!isInside(ptr, ptrSize, *(arr + i))){
                printf("%d times %d\n", reps, *(arr + i));
            }
 
            ptr[ptrSize] = *(arr + i);
            ptrSize++;
            continue;
        }
        printf("%d time %d\n", reps, *(arr + i));
    }
 
    free(ptr);
    return 0;
}
 
int repCount(int arr[], int size, int target){
 
    int counter = 0;
 
    for (int i = 0; i < size; i++){
        if (*(arr + i) == target){
            counter++;
        }
    }
    return counter;
}
 
bool isInside(int source[], int size, int target){
 
    for (int i = 0; i < size; i++){
        if (*(source + i) == target){
            return true;
        }
    }
    return false;
}