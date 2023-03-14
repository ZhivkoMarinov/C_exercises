#include <stdio.h>
 
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int right_digit;
    int sum = 0;
    int temp = num;
 
    do{
        right_digit = temp % 10;
        sum = sum*10 + right_digit;
        temp /= 10;
    }while(temp > 0);
 
    (sum == num) ? printf("Palindrome\n") : printf("Not a palindrome\n");
 
    return 0;
}