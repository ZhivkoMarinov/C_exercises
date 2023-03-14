/*
Направете структура struct rect, която съдържа в
себе си две точки. Създайте обект от тип тази структура наречен
screen. Използвайте функцията makepoint за да зададете начална точка
на екрана (0, 0) и крайна точка (15, 15). Запълнете пространството
между тях с тирета.
 
*/
#include <stdio.h>
#include <stdlib.h>
 
struct point{
    int x;
    int y;
};
 
struct rect{
    struct point a;
    struct point b;
};
 
struct point makepoint(int, int);
 
void displayRect(struct point *, struct point *);
 
int main()
{
 
    struct rect screen;
    screen.a = makepoint(0, 0);
    screen.b = makepoint(15, 15);
    displayRect(&screen.a, &screen.b);
 
    return 0;
}
 
struct point makepoint(int x, int y){
    struct point *ptr_point;
    ptr_point = malloc(sizeof(struct point));
    ptr_point->x = x;
    ptr_point->y = y;
 
    return *ptr_point;
}
 
void displayRect(struct point *ptrX, struct point *ptrY){
 
    for (int row = 0; row < abs(ptrX->y - ptrY->y); row++){
        for (int col = 0; col < abs(ptrX->x - ptrY->y); col++){
            putchar('-');
        }
        putchar('\n');
    }
}