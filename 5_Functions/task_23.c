/*
Да се напише функция с име isTriangle, която по дадени три цели
числа определя дали съществува триъгълник със страни тези числа.
*/

#include <stdio.h>
#include <stdbool.h>

bool isTriangle(int a, int b, int c){
    if(a + b > c && a + c > b && b + c > a){
        return true;
    }
    return false;
}

int main(){	
	
    int a, b, c;
    printf("Enter a = ");
    scanf("%d", &a);
    
    printf("Enter b = ");
    scanf("%d", &b);
    
    printf("Enter c = ");
    scanf("%d", &c);
    
    if(isTriangle(a, b, c)){
        printf("Triangle\n");
    }else{
        printf("Not a Triangle\n");
    }

}