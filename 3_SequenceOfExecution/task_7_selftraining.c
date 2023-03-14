#include <stdio.h>
 
int main()
{
    int n;
    double first, d;
    printf("How many elements?: ");
    scanf("%d", &n);
 
    printf("Which is the first element?: ");
    scanf("%lf", &first);
 
    printf("What is the difference between the first two elements?: ");
    scanf("%lf", &d);
 
    double curent = first * d;
    printf("%lf,", first);
    for(int i = 1; i < n; i++){
        printf(" %lf", curent);
        if(i != n - 1){
            printf(",");
        }
        first = curent;
        curent = first * d;
    }
    printf("\n");
 
    return 0;
}