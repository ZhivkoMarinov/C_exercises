#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isValid(int *arr, int len){
	
	int sum = 0;

	for (int i = 0; i < len; ++i)
	{
		if (i % 2 != 0){
			arr[i] *= 2; 
			if (arr[i] > 9){
				arr[i] -= 9;
			}
		}
		sum += arr[i];
	}

	if (sum % 10 == 0){
		return true;
	}

	return false;
}

void reverse(int *arr, int len){

	for (int i = 0; i < len / 2 ; i++){
		int temp = arr[i];
		arr[i] = arr[(len - i) - 1];
		arr[(len - i) - 1] = temp;
	}	
}

void visaOrMaster(int *arr){
	
	if (arr[0] == 4){
		printf("Visa - ");
		return;
	}

	if (arr[0] == 5){
		switch(arr[1]){
			case 1: printf("Master - "); return;
			case 2: printf("Master - "); return;
			case 5: printf("Master - "); return;
			case 3: printf("Master - "); return;
			case 4: printf("Master - "); return;

			default: printf("Unknown - "); return;
		}
	}
	
	printf("Unknown - ");
	return;
}

int main(void){

	int arr[9][16] = {	{5, 6, 1, 0, 5, 9, 1, 0, 8, 1, 0, 1, 8, 2, 5, 0},	//valid
						{5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4},	//valid
						{5, 1, 0, 5, 1, 0, 5, 1, 0, 5, 1, 0, 5, 1, 0, 0},	//valid
						{4, 0, 1, 2, 8, 8, 8, 8, 8, 8, 8, 8, 1, 8, 8, 1},	//valid
						{4, 2, 0, 4, 5, 8, 7, 6, 9, 0, 1, 2, 5, 2, 3, 4},	//valid
						{4, 2, 0, 4, 5, 8, 7, 6, 9, 0, 1, 2, 5, 2, 3, 7},	//invalid
						{4, 2, 0, 4, 2, 8, 7, 5, 9, 0, 1, 2, 5, 2, 3, 4},	//invalid
						{4, 2, 0, 4, 5, 8, 7, 6, 9, 0, 1, 2, 5, 2, 3, 4},	//valid
						{4, 2, 0, 4, 5, 8, 7, 6, 9, 0, 1, 2, 5, 2, 3, 7}	//invalid

					};


	for (int i = 0; i < 9; i++){

		visaOrMaster(arr[i]);

		reverse(arr[i], 16);

		if (isValid(arr[i], 16)){
			printf("Valid\n");
		}
		else{
			printf("Not Valid\n");
		}
	}

	return 0;
}