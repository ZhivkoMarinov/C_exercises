#include <stdio.h>

int main()
{   

    int num;

    do{
        scanf("%d", &num);
    }while(num < 2 || num >= 12);

    printf("%d\n", num);
    
    return 0;
} 