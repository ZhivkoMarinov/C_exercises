#include <stdio.h>
 
int main()
{

    int a, b, n;
	
    do{
        printf("Enter A: ");
        scanf("%d", &a);

        printf("Enter B: ");
        scanf("%d", &b);

        printf("Enter N: ");
        scanf("%d", &n);
		
    }while(b == 0 || n < 1 || n > 100);

    int temp = a / b;

    for(int i = 0; i <= n; i++){
        
        printf("%d", temp);

        a -= (b * temp);
        a = a * 10;
        temp = a / b;

        if (i == 0){
        printf(".");
        }
    }
    printf("\n");

    return 0;
}