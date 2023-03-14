/*
Да се напише функция, която намира и връща лицето на
правоъгълник.
*/

#include <stdio.h>


double rectangle_area(double a, double b){
	return a * b;
}

int main(){	
	
    double a, b;
    
    printf("Enter a = ");
    scanf("%lf", &a);
    
    printf("Enter b = ");
    scanf("%lf", &b);
    
    printf("%lf\n", rectangle_area(a, b));
	
}