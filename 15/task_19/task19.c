/* 19. Напишете рекурсивни функции
max, min, sum, product, mean,
за намиране съответно на максимум, минимум, сума, произведение и
средно аритметично на елементите на масив от цели числа.
Масивът и броят елементи в него се подават като параметри на
функциите .  */

#include "task_19.h"

int main()
{
    int arr[][SIZE] = {{9, 22, 15, 59, 16},
                    {1, 2, 4, 5, 6},
                    {1, 25, 4, 0, 8},
                    {12, 2, 14, 5, 62},
                    {0, 2, 22, 5, 16}};

    for (int i = 0; i < SIZE; i++)
    {
        run(arr[i]);
    }

    return 0;
}