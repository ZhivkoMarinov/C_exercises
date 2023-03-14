#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 5

int** createMatrix(int n){

	int **matrix = malloc(sizeof(int*) * M);

	for (int i = 0; i < N; i++){
		matrix[i] = calloc(N, sizeof(int));
	}
}

int main(void){

}