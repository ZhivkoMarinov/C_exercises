#include <stdio.h>
 
int main()
{
    double money = 0.0;
    double interest = 0.0;
    double target_money = 0.0;
    int years = 0;
 
    printf("Enter amount: ");
    scanf("%lf", &money);
 
    printf("Enter interest rate: ");
    scanf("%lf", &interest);
 
    printf("Enter target sum: ");
    scanf("%lf", &target_money);
 
    printf("Enter years: ");
    scanf("%d", &years);
 
    double balance = money;
 
    int iters;
    if(years < 5){
        iters = 5;
    }else{
        iters = years;
    }
 
    for(int i = 1; i <= iters; i++){
 
        balance += balance * interest / 100;
        if(i == years){
            printf("Balance after %d years = %0.2lf\n", i, balance);
        }
 
        if(i == 5 && years != 5){
            printf("Balance after 5 years = %0.2lf\n", balance);
        }
    }
 
    int target = 0;
    double result = target_money;
    while(money < result){
        result /= 1 + (interest / 100);
        target++;
    }
    printf("You will reach your target sum after %d years\n", target);
 
    return 0;
}