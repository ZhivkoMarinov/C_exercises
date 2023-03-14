/*Дадени с два стека с числа и числата в тях са сортирани във низходящ
ред отдолу нагоре.Да се напише програма на C, която слива двата стека в
сортиран масив*/

#include "task_6.h"

int main()
{
    
    stack *stack1 = NULL;
    stack *stack2 = NULL;

    int start1 = 1, end1 = 20;
    int start2 = 7, end2 = 14;

    int len = (end1 - start1) + (end2 - start2);
    
    fillSort(&stack1, start1, end1);
    fillSort(&stack2, start2, end2);
    
    int *result = mergeStacks(stack1, stack2);
    
    for (int i = 0; i <= len; i++){
        printf("%d\n", result[i]);
    }
    
    
    return 0;
}