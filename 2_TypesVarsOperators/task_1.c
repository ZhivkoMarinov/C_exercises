#include <stdio.h>

int main () {
   
	int num;
	do{
		printf("Enter 6-digit number: ");
		scanf("%d", &num);
	}while(num < 100000 || num > 999999);

	int p1 = num / 100000;
    	int p2 = num / 10000 % 10;
	int p3 = num / 1000 % 10;
    	int p4 = num / 100 % 10;
	int p5 = num / 10 % 10;
	int p6 = num % 10;

	int year = (p1 * 1000) + (p3 * 100) + (p5 * 10) + p6;
	printf("%d\n", year);

	if(year % 4 == 0){
		if(year % 100 == 0 && year % 400 != 0){
			printf("Not a leap year\n");
		}
		if(year % 100 == 0 && year % 400 == 0){
			printf("Leap year\n");
		}
		printf("Leap year\n");
	}else{
		printf("Not a leap year\n");
	}

   return 0;
}
