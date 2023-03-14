#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 8

bool isSmaller(int prev, int middle, int next){
	if (prev < middle && middle > next){
		return true;
	}
	return false;
}

bool isBigger(int prev, int middle, int next){
	if (prev > middle && middle < next){
		return true;
	}
	return false;
}

bool isZigZag(int *arr){

	for (size_t i = 1; i < SIZE - 1; i++){
		if (isSmaller(arr[i - 1], arr[i], arr[i + 1]) == 0 && 
			isBigger(arr[i - 1], arr[i], arr[i + 1]) == 0){
			return false;
		}
	}
	return true;
}

int main(void){

	int arr[] = {1, 4, 3, 5, 8, 7, 6, 11};

	if (isZigZag(arr)){
		printf("ZigZag\n");
	}
	else{
		printf("Not ZigZag\n");
	}


	return 0;
}