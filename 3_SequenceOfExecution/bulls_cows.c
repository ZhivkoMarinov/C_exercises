#include <stdio.h>
 
int main()
{   
 
    int target = 2481;
    int num = 0;
    int temp = target;
    int bulls;
    int cows;
 
    do{
        scanf("%d", &num);
 
        bulls = 0;
        cows = 0;
 
        for(int i = 0; i < 4; i++){
            int num_r = num % 10;
 
            for(int j = 0; j < 4; j++){
                int target_r = temp % 10;
 
                if(target_r == num_r && i == j){
                    bulls++;
                }else if(target_r == num_r){
                    cows++;
                }
                temp /= 10;
            }
            num /= 10;
            temp = target;
        }
        printf("%d bulls\n%d cows\n\n", bulls, cows);
    }while(bulls != 4);
 	
 	printf("Bravo, the number is %d.\n", target);
 
    return 0;
}