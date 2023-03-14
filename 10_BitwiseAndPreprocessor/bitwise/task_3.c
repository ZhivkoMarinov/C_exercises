/*
Премахнете всички битове на число след n-тия
бит включително.
*/

#include <stdio.h>

int main()
{
    int n = 5;
    int num = 255;
    
    printf("%d\n", num >>= n - 1);

    return 0;
}
