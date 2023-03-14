#include <stdio.h>

int main () {
   
	int num;
	do{
		printf("Enter 6-digit number: ");
		scanf("%d", &num);
	}while(num < 100000 || num > 999999);
	
	int a, b = 0;

	int x = 1;
	for(int i = 0; i < 6; i++){
		int temp;		
		temp = (num / x) % 10;
		printf("%d\n", temp);
		
		if(temp % 2 == 0){
			a += temp;
		}else{
			b += temp;
		}
		x *= 10;
	}
	
	printf("Rect_area = %d\n", a * b);

   return 0;
}