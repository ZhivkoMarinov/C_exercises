/*Като използвате стек, напишете програма, която проверява
дали в едни аритметичен израз, записан чрез стринг, на всяка
отваряща скоба отговаря затваряща. Проверете за трите вида
скоби ( ), [ ], { } .*/

#include "task_9.h"

int main()
{   

    
    char test[][9] = {
                        "{()[()]}", // correct
                        "{()[()])", // incorrect
                        "{{[()]}}", // correct
                        "({[](}))"  // incorrect 
                    };

    for (int i = 0; i < 4; ++i){
        
        if (check(test[i])){
            printf("Correct\n\n");
        }
        else{
            printf("Incorrect\n\n");
        }
    }
        
    return 0;
}
