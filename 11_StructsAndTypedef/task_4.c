/*
Дефинирайте тип указател към функция, която изпълнява определена
операция върху две целочислени променливи. Дефинирайте функции, които
изпълняват операциите +, -, *, /. Използвайте новия тип, за да извикате всяка една
от функциите.
*/
#include <stdio.h>
#include <stdlib.h>
 
typedef int (*foo)(int, int);
 
int addition(int x, int y){
    return (x + y);
}
 
int subtraction(int x, int y){
    return (x - y);
}
 
int multiplication(int x, int y){
    return (x * y);
}
 
int (*convert(const char code)) (int x, int y){
    if (code == '+') return &addition;
    if (code == '-') return &subtraction;
    if (code == '*') return &multiplication;
}
 
int main(void)
{
    foo ptr;
    ptr = convert('-');
    printf("%d\n", ptr(13, 7));
 
    return 0;
}
