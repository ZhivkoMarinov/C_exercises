#include <stdio.h>
 
int main()
{
    int num;
    int count = 0;
    scanf("%d", &num);
 
    do{
        num = num / 10;
        count++;
    }while(num % 10 != 0);
 
    printf("%d", count);
 
    return 0;
}