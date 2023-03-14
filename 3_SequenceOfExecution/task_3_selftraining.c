#include <stdio.h>
#include <math.h>
 
int main()
{

    int n = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    int m = 1, k = 1;

    while(pow(m, 2) < n){
        while(pow(k, 2) < n){
            if(pow(m, 2) + pow(k, 2) == n){
                printf("[%d, %d]\n", m, k);
            }			
            k++;
        }
        m++;
    }

    return 0;
}