/*
Да се напише функция, която намира и отпечатва лицето на кръг
*/

#include <stdio.h>

#define PI (3.141592653589793)

double circle_area(double r){
    return PI * r * r;
}

int main(){	
	
    double r;
    printf("Enter triangle radius = ");
    scanf("%lf", &r);
    printf("Circle area = %lf\n", circle_area(r));
	
}