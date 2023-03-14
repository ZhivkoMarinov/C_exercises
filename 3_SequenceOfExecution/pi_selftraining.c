#include <stdio.h>
 
int main()
{

    int n;
    printf("Enter N = ");
    scanf("%d", &n);
    
    int delitel = 1;
    double drob;
    double sum_right_side = 0.0;
    
    for(int index = 0; index < n; index++){
        drob = (double) 1 / delitel;
        if(index % 2 == 0){			
	        sum_right_side += drob;
        }else{			
	        sum_right_side -= drob;
        }

        delitel += 2;
    }

    printf("%lf\n", (double) 4 * sum_right_side);
    return 0;
}