#include <stdio.h>

int main()
{   

    int ounces;
    printf("Ounces: ");
    scanf("%d", &ounces);

    float cups = ounces / 8.;
    printf("%d ounces equals to %0.3f cups\n", ounces, cups);

    return 0;
} 