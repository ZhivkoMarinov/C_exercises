/*
В стек са записани няколко думи, чийто брой не е известен. Да се напише
програма, която прочита дума, въведена от клавиатурата и проверавя дали
тази дума е записана в стека.
*/

#include "task_7.h"

int main(void){

    Stack *newStack = init();

    char test[5][20] = {"varna", "sofia", "kaspichan", "rakiq", "lesh"};
    char word[] = "rakiq";

    for (int i = 0; i < 5; i++){
        push(newStack, test[i]);
    }
    
    searchWord(newStack, word);    

    return 0;
}

