#include <stdio.h> 
#include <unistd.h>
 
int main () {
	
	int num;

	printf("Enter int number: ");
	scanf("%d", &num);

	for(int i = 0; i < 32; i++){
		if(1 & (num >> i)){
			sleep(1);
			if(i == 0){
				printf("*\n");
				continue;
			}		
			printf("%*c%c\n", i, ' ', '*');
		}
	}	
	
	return 0;
}