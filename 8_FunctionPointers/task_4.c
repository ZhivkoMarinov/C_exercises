#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void sort_arr(int*, int, int, void (*fn)(int*, int, int));
 
void bubbleSort(int*, int, int);

int* init(int);
 
void randArr(int*, int);
 
void printArr(int*, int);
 
void reverseArr(int*, int);

void swap(int*, int*);
 
int main()
{
    srand(time(0));
 
    int len = 0;
    printf("How many random ganerated elements you wish to sort?\nElements count = ");
    scanf("%d", &len);
    
    int* arr = init(len);
 
    randArr(arr, len);
    printf("\nGenerated array:\n");
    printArr(arr, len);
 
 
    int direction = 0;
    printf("\n\nChoose direction to sort.\n0 -> ascending\n1 -> descending\n");
    scanf("%d", &direction);

    void (*fp)(int*, int, int);
    fp = bubbleSort;

    sort_arr(arr, len, direction, fp);
    printArr(arr, len);

    free(arr);
 
    return 0;
}

 
void sort_arr(int *arr, int n, int dir, void (*fn)(int*, int, int)){
    fn(arr, n, dir);
}

void bubbleSort(int* arr, int len, int dir){

    int counter = 0;
    while(counter < len - 1){

        for (int i = 0; i < len - 1; i++){
            if(arr[i + 1] < arr[i]){
                swap(&arr[i], &arr[i + 1]);
            }
        }
        counter++;
    }

    if (dir){
        reverseArr(arr, len);
    }
}

int* init(int len){
    int* arr = (int*) malloc(sizeof(int) * len);
    return arr;
}
 
void randArr(int* arr, int len){
    for (int i = 0; i < len; i++){
        arr[i] = rand() % 100;
    }
}
 
void printArr(int* arr, int len){
    for (int i = 0; i < len; i++){
        printf("%d\t", arr[i]);
    }
    putchar('\n');
}
 
void reverseArr(int* arr, int len){
 
    for (int i = 0; i < len / 2; i++){
        int temp = arr[i];
        arr[i] = arr[(len - i) - 1];
        arr[(len - i) - 1] = temp;
    }
}

void swap(int *x, int *y){
    
    int temp = *x;
    *x = *y;
    *y = temp;
}