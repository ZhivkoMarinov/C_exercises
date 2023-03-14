#include <stdio.h>

int main () {
   
	int caravan = 3;
	int caravan_price = 90;

	int camper = 3;
	int camper_price = 100;

	int sum = 0;
	int choice = 0;
	int days = 0;

	do{
		printf("To rent caravan enter 1\nTo rent camper enter 2\n");
		scanf("%d", &choice);
	}while(choice != 1 && choice != 2);

	if(choice == 1){
		printf("Cost of a caravan is %d$ / per day. For how many days you want to rent: ", caravan_price);
		scanf("%d", &days);
		sum = caravan_price * days;
		printf("The total cost is %d$\n", sum);
	}

	if(choice == 2){
		printf("Cost of a camper is %d$ / per day. For how many days you want to rent: ", camper_price);
		scanf("%d", &days);
		sum = camper_price * days;
		printf("The total cost is %d$\n", sum);
	}

   return 0;
}