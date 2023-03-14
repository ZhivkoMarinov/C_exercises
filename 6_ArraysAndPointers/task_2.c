/*
Напишете програма, която запълва масив от 20 елемента с произволно избрани
цели числа. За целта използвайте функцията rand().
Въведете едно цяло число от клавиатурата. Проверете дали въведеното число
от клавиатурата е намерено в масива. Принтирайте масива и отговора дали
числото е намерено в масива.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 20

int randNum(int min, int max);

void printArr(int source[], int size);

bool isInside(int source[], int size, int target);

int main () {

    srand(time(0));

    int arr[SIZE] = {0};
    int number = 0;

    for (int i = 0; i < SIZE; i++){
    	*(arr + i) = randNum(1, 100);
    }

    printf("Enter number: ");
    scanf("%d", &number);

    printArr(arr, SIZE);

    if (isInside(arr, SIZE, number)){
    	printf("Your number %d is in the array.\n", number);

    } else {
    	printf("Your number %d is not in the array.\n", number);
    }

	return 0;
}

int randNum(int min, int max){

    int result =  (rand() % (max - min + 1)) + min;

    return result;
}

void printArr(int source[], int size){

    printf("Array elements: ");

    for (int i = 0; i < size; i++){
        printf("%d ", *(source + i));
    }

    printf("\n");
}

bool isInside(int source[], int size, int target){

    for (int i = 0; i < size; i++){
        if (*(source + i) == target){
            return true;
        }
    }
    return false;
}