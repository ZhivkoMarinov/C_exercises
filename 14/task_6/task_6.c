/* 6. Даден e масив от 5 положителни числа. Да се напишат две функции, които
намират минималната и максималната стойност, които могат да се
изчислят, като се сумират точно 4 от тези 5 числа.
● Програмата чете масива от тези 5 числа, извиква съответните функции и
отпечатва съответно minimum и maximum стойностите, всяка на нов ред.
arr = [1,3,5,7,9]
minimum sum is 1 + 3 + 5 + 7 = 16
maximum sum is 3 + 5 + 7 + 9 = 24.
5. отпечатва се 16 24  */

#include <stdio.h>

void minAndMaxSum(int *arr, int *min, int *max)
{
    int temp_min = 0;
    int temp_max = 0;

    for (int forward = 0, backward = 4; forward < 4 && backward > 0; forward++, backward--)
    {
        temp_min += arr[forward];
        temp_max += arr[backward];
    }

    if (temp_min > temp_max)
    {
        *min = temp_max;
        *max = temp_min;
    }
    else
    {
        *min = temp_min;
        *max = temp_max;
    }
}

int main()
{
    int min = 0;
    int max = 0;

    int arr[10][5] = {
        {1, 3, 5, 7, 9}, // temp_min = 16 | max_sum = 24
        {112, 160, 180, 240, 288},
        {2, 4, 6, 8, 10},
        {19, 17, 15, 13, 11},
        {20, 18, 16, 14, 12},
        {24, 18, 129, 858, 10},
        {1, 1, 1, 1, 1},
        {22, -129, 40, 30, 20},
        {53, 2, 0, 53, 8},
        {4, 2, 0, 4, 5}

    };
    for (int i = 0; i < 10; i++)
    {
        minAndMaxSum(arr[i], &min, &max);
        printf("\n(%d row)\t\t Min sum = %d\t\tMax sum = %d\n", i, min, max);
    }
    return 0;
}