/*
Прочетете масив от цели числа от клавиатурата.
Копирайте въведения масив във втори масив, като умножите стойността на
всеки елемент по 2. Принтирайте двата масива.
*/

#include <stdio.h>

#define SIZE 6

void mapArr(int source[], int destination[], int size, int multiplier);

void printArr(int source[], int size);

int main () {

    int first_arr[SIZE] = {0};
    int second_arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", first_arr + i);
    }

    mapArr(first_arr, second_arr, SIZE, 2);

    printArr(first_arr, SIZE);

    printArr(second_arr, SIZE);

    return 0;
}

void mapArr(int source[], int destination[], int size, int multiplier){

    for (int i = 0; i < size; i++){
        *(destination + i) = *(source + i) * multiplier;
    }

}

void printArr(int source[], int size){

    printf("Array elements: ");

    for (int i = 0; i < size; i++){
        printf("%d ", *(source + i));
    }

    printf("\n");
}