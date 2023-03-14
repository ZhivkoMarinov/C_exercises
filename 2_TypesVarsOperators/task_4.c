#include <stdio.h>
 
int main () {
 
	float tomatoes = 4.50;
	float flour = 1.50;
	float yogurt = 0.50;
	float icecream = 0.60;
	float bonbons = 1.50;
	float lolypop = 0.15;
 
	float sum = 0.0;
 
	int choice;
 
	do{
	    printf("Total: %0.2f\n", sum);
		printf("Add products to cart by selecting the product code. When you are ready press 0\n");
		printf("Products:\n1 - tomatoes = %0.2f\\kg\n2 - flour = %0.2f\\kg\n3 - yogurt = %0.2f\\kg\n4 - icecream = %0.2f\\kg\n5 - bonbons = %0.2f\\kg\n6 - lolypop = %0.2f\\kg\n", tomatoes, flour, yogurt, icecream, bonbons, lolypop);
		scanf("%d", &choice);
 
		if(choice == 1){
		    sum += tomatoes;
		}
 
		if(choice == 2){
		    sum += flour;
		}
 
		if(choice == 3){
		    sum += yogurt;
		}
 
		if(choice == 4){
		    sum += icecream;
		}
 
		if(choice == 5){
		    sum += bonbons;
		}
 
		if(choice == 6){
		    sum += lolypop;
		}
 
	}while(choice != 0);
 
	printf("Total sum: %0.2f\n", sum);
 
 
 
   return 0;
}