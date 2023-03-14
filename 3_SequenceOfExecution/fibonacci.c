#include <stdio.h>
 
int main()
{
    int n = 0;
    printf("Enter Nth element: ");
    scanf("%d", &n);
    
    int prev = 0;
    int current = 1;
    int temp;
    
    for(int i = 0; i < n; i++){
        printf("%d", current);
        if(i != n - 1){
        	printf(", ");
        }else{
        	printf("\n");
        }
        temp = prev + current;
        prev = current;
        current = temp;		
    }

    return 0;
}