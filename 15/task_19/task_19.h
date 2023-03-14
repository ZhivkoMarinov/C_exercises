#ifndef TASK_19_H
#define TASK_19_H

#include <stdio.h>

#define SIZE 5

int min(int *arr, int size, int count, int min_res);
int max(int *arr, int size, int count, int max_res);
int sum(int *arr, int size, int count, int total_sum);

int product(int *arr, int size, int count, int total_product);
float average(int *arr, int size, int count);
void run(int *arr);

#endif