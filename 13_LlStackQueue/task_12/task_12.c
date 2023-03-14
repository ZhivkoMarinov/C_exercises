/*Като използвате стек, напишете програма, която прочита едно
цяло положително число и преобразува това число в двоична
бройна система, т.е. записва го в двоичен вид.*/

#include "task_12.h"

int main()
{   

    int test[4] = {
        38874,      // 1001011111011010
        551287,     // 10000110100101110111    
        8656563,    // 100001000001011010110011
        17453364    // 1000010100101000100110100 
    };

    for (int i = 0; i < 4; ++i){
        binary *top = NULL;
        toBinary(&top, test[i]);
        display(top);
    }    
        
    return 0;
}