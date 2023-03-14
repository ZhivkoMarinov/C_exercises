/*
Напишете програма, която печата броя на уникалните редове в бинарна
матрица, съставена само от единици и нули.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define R 7
#define C 5

void print2Darr(int *arr, int row, int col);

bool isEqual(int arr1[], int arr2[], int size);

int main(){

	int arr[R][C] = {
                    {0, 1, 0, 1, 1},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 0},                    
                    {1, 1, 1, 1, 1},
                    {0, 1, 0, 1, 0},
                    {1, 1, 0, 1, 1}
                };

    int current_row[C] = {0};
    int next_row[C] = {0};

    int counter = 0;

    for (int row = 0; row < R - 1; row++)
    {
    	for (int col = 0; col < C; col++)
    	{
    		current_row[col] = arr[row][col];
    		next_row[col] = arr[row + 1][col];
    	}

    	if (!isEqual(current_row, next_row, C))
    		{
    			counter++;
    		}

    }

    printf("Unique rows: %d\n", counter);

	return 0;
}

bool isEqual(int arr1[], int arr2[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr1[i] != arr2[i])
		{
			return false;
		}
	}
	return true;
}
