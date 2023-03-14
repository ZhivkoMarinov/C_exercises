#include <stdio.h>

int main()
{   

    int earth_days;
    
    printf("Enter Earth days count: ");
    scanf("%d", &earth_days);

    int jupiter_years = 365 * 12;
    
    printf("%d Earth days = %f Jupiter years\n", earth_days, (float) earth_days / jupiter_years);

    return 0;
} 