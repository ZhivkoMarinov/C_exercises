#include <stdio.h>
 
int main()
{
    float first_day_km = 0.0;
    float percent_day = 0.0;
    int days_running = 0;
    float X, Y;
 
    printf("Enter km for the first day: ");
    scanf("%f", &first_day_km);
 
    printf("Enter percent per day: ");
    scanf("%f", &percent_day);
 
    printf("Days running: ");
    scanf("%d", &days_running);
 
    printf("Enter X: ");
    scanf("%f", &X);
 
    printf("Enter Y: ");
    scanf("%f", &Y);
 
    float overall_distance = 0;
    float distance_per_day = first_day_km;
 
    int iters;
    if(days_running < 10){
        iters = 10;
    }else{
        iters = days_running;
    }
 
    for(int i = 1; i <= iters; i++){
        overall_distance += distance_per_day;
        distance_per_day += distance_per_day * percent_day / 100;
        if(i == days_running){
            printf("After %d days running: %0.2fkm\n", i, overall_distance);
        }
 
        if(i == 10 && days_running != 10){
            printf("Distance after 10 days: %0.2fkm\n", overall_distance);
        }
    }
 
    distance_per_day = first_day_km;
    int day_counter = 1;
    while(X > distance_per_day){
        distance_per_day += distance_per_day * percent_day / 100;
        day_counter++;
    }
 
    printf("%0.2fkm for one day will be achieved on %dth day\n", X, day_counter);
 
    overall_distance = first_day_km;
    day_counter = 1;
    while(Y > overall_distance){
        overall_distance += overall_distance * percent_day / 100;
        day_counter++;
    }
    printf("Overall of %0.2fkm will be achieved on %dth day\n", Y, day_counter);
 
    return 0;
}