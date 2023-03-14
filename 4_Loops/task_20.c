/* 
Напишете C програма за броене на честотата на цифрите в дадено число.
Input any number: 116540 

Frequency of 0 = 1
Frequency of 1 = 2
Frequency of 2 = 0
Frequency of 3 = 0
Frequency of 4 = 1
Frequency of 5 = 1
Frequency of 6 = 1
Frequency of 7 = 0
Frequency of 8 = 0
Frequency of 9 = 0
*/

#include <stdio.h>
 
int main()
{
    long double n;
    printf("enter N = ");
    scanf("%Lf", &n);
 	
 	// looping through the digits from 0 to 9
    for(int i = 0; i < 10; i++){

        long int temp = n;	//copy of n
        int count = 0;		//counter for repetitions

        // integer division of 'temp' by 10 on each iter. Taking the last digit and compare to i.
        while(temp > 0){
            if(temp % 10 == i){
                count++;
            }
            temp /= 10;
        }
        printf("Frequency of %d = %d\n", i, count);
 
    }
    return 0;
}
