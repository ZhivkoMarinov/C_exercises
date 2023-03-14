#include "task_19.h"

int min(int *arr, int size, int count, int min_res)
{
    if (arr[0] < min_res)
    {
        min_res = arr[0];
    }
    if (count == size - 1)
    {
        return min_res;
    }
    arr++;
    count++;
    return min(arr, size, count, min_res);
}

int max(int *arr, int size, int count, int max_res)
{
    if (arr[0] > max_res)
    {
        max_res = arr[0];
    }
    if (count == size - 1)
    {
        return max_res;
    }
    arr++;
    count++;
    return max(arr, size, count, max_res);
}

int sum(int *arr, int size, int count, int total_sum)
{
    arr++;
    total_sum += arr[0];
    count++;
    if (count == size - 1)
    {
        return total_sum;
    }
    return sum(arr, size, count, total_sum);
}

int product(int *arr, int size, int count, int total_product)
{
    arr++;
    total_product *= arr[0];
    count++;
    if (count == size - 1)
    {
        return total_product;
    }
    return product(arr, size, count, total_product);
}

float average(int *arr, int size, int count)
{
    int arr_sum = sum(arr, size, count, arr[0]);

    return (float)arr_sum / size;
}

void run(int *arr)
{

    int count = 0;

    int min_res = min(arr, SIZE, count, arr[0]);
    int max_res = max(arr, SIZE, count, arr[0]);
    int total_sum = sum(arr, SIZE, count, arr[0]);
    int total_product = product(arr, SIZE, count, arr[0]);
    float avg = average(arr, SIZE, count);

    printf("\nMax Res = %d", max_res);
    printf("\nMin Res = %d", min_res);
    printf("\nSum = %d", total_sum);
    printf("\nProduct = %d", total_product);
    printf("\nAverage = %.2f", avg);
    printf("\n\n");
}