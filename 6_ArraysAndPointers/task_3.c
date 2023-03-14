/*
Напишете програма, която принтира уникалните елементи от масив с цели числа,
въведени от клавиатурата. За целта, някои от числата трябва да се повтарят.
*/

#include <stdio.h>
#include <stdbool.h>
 
#define SIZE 6
 
bool isUnique(int arr[], int size, int target);
 
int main()
{
    int arr[SIZE] = {0};
 
    for (int i = 0; i < SIZE; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);    
    }
 
    for (int i = 0; i < SIZE; i++){
        if (isUnique(arr, SIZE, *(arr + i))){
            printf("%d is unique\n", *(arr + i));
        }
    }
 
    return 0;
}
 
bool isUnique(int arr[], int size, int target){
 
    int counter = 0;
 
    for (int i = 0; i < size; i++){
        if (*(arr + i) == target){
            counter++;
        }
    }
    if (counter > 1){
        return false;
    }
    return true;
}