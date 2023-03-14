/*
Да се състави програма на C, чрез която се въвеждат естествени числа от интервала
[1..50].
Програмата да преустановява работата си при въвеждане на 2 последователни числа,
които са равни.
Програмата да извежда
броя на въведените числа и тяхната средна стойност.
Пример:
1,2,3,4,5,5
Изход:
брой 6, средна стойност 3.33333.
*/

#include <stdio.h>
 
int main()
{
    int n;
    int last = 0;
    int sum = 0;
    int count = 0;
 
    do{
        printf("Enter number in range [1, 50]: ");
        scanf("%d", &n);
        sum += n;
        count++;
 
        if(n == last){
            printf("\ncount %d, average = %lf\n", count, (double) sum / count);
            break;
        }
 
        last = n;
 
    }while(n >= 1 || n <= 50);
 
 
 
    return 0;
}
