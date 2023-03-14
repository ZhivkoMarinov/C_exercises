#include <stdio.h>

int main()
{   

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int min, max;
    if(x <= y){
        min = x;
        max = y;
    }else{
        min = y;
        max = x;
    }

    if(z >= min && z < max){
        printf("%d %d %d\n", min, z, max);
    }else if(z < min){
        printf("%d %d %d\n", z, min, max);
    }else{
        printf("%d %d %d\n", min, max, z);
    }
    
    return 0;
} 