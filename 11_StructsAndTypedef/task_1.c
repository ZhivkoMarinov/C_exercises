#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
    int centuries;
    int years;
    int months;
    int days;
    int hours;
    int minutes;
    int seconds;
} time_struct;

void setData(time_struct *);

void displayData(time_struct *, char*);

void intervalDifference(time_struct *, time_struct *, time_struct *);

int main(void){

    srand(time(NULL));

    time_struct first_interval;
    time_struct second_interval;
    time_struct difference;

    setData(&first_interval);
    setData(&second_interval);
    
    intervalDifference(&difference, &first_interval, &second_interval);

    displayData(&first_interval, "First interval");
    displayData(&second_interval, "Second interval");
    displayData(&difference, "Difference");
    
    return 0;
}

void setData(time_struct *ptr){

    
    ptr->centuries = rand() % 11;
    ptr->years = rand() % 100;
    ptr->months = rand() % 13;
    ptr->days = rand() % 32;
    ptr->hours = rand() % 24;
    ptr->minutes = rand() % 61;
    ptr->seconds = rand() % 61;

}

void intervalDifference(time_struct *timeDifference, time_struct *interval1, time_struct *interval2){

    timeDifference->centuries = abs(interval1->centuries - interval2->centuries);
    timeDifference->years = abs(interval1->years - interval2->years);
    timeDifference->months = abs(interval1->months - interval2->months);
    timeDifference->days = abs(interval1->days - interval2->days);
    timeDifference->hours = abs(interval1->hours - interval2->hours);
    timeDifference->minutes = abs(interval1->minutes - interval2->minutes);
    timeDifference->seconds = abs(interval1->seconds - interval2->seconds);


    
}

void displayData(time_struct *ptr, char name[]){
    printf("\n______________\n%s\n______________\n", name);
    printf("Centuries: %d\n",ptr->centuries);
    printf("Years: %d\n",ptr->years);
    printf("Months: %d\n",ptr->months);
    printf("Days: %d\n",ptr->days);
    printf("Hours: %d\n",ptr->hours);
    printf("Minutes: %d\n",ptr->minutes);
    printf("Seconds: %d\n",ptr->seconds);
}