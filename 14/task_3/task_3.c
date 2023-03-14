#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 5

int **createMatrix(){

	int **matrix = malloc(sizeof(int*) * M);

	for (int i = 0; i < N; i++){
		matrix[i] = calloc(N, sizeof(int));
	}

	int count = 1;

	for (int row = 0; row < M; row++){
		for (int col = row + 1; col < N; col++){    //[1][0] = 1 -> [2][0] = 2 -> [3][0] = 3 -> [4][0] = 4;
			matrix[col][row] = count;				//[2][1] = 5 -> [3][1] = 6 -> [4][1] = 7;
			count++;		
		}
	}

	for (int row = M - 1; row >=0; row--){
		for (int col = row - 1; col >= 0; col--){
			matrix[col][row] = count;
			count++;		
		}
	}
	return matrix;
	
}

void display(int **arr){
	for (int i = 0; i < M; i++){
		for (int j = 0; j < N; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

int main(void){

	int **x = createMatrix();

	display(x);

	return 0;
}