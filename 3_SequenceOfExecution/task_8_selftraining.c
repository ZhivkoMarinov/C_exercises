#include <stdio.h>
 
int main()
{

    int n;
    printf("Enter N = ");
    scanf("%d", &n);
    
    int current = 1;
    int sum = 0;
    
    for(int i = 0; i <= n; i++){
        printf("A(%d) = %d\n", i, current);
        sum += current;
        current = 2 * current + 1;
    }
    
    printf("---------------------\nSum off all %d elements = %d\n", n, sum);
    return 0;
}