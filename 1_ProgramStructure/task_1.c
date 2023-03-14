#include <stdio.h>

int main()
{
    int weight;
    printf("Enter your weight in kg: ");
    scanf("%d", &weight);

    float moon_weight = (weight * 17) / 100.;

    printf("Your moon weight is: %0.2fkg\n", moon_weight);

    return 0;
} 