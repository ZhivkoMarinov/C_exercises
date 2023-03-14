/*
Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG
не е дефиниран, не печата нищо.
*/

#include <stdio.h>
#include <stdlib.h>

#define DEBUG 3

#ifdef DEBUG 
    #define NAME(s)(printf("%s\n", s))
#endif

int main(){
    NAME("Zhivko");
    return 0;
}