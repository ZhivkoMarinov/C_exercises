/*
Напишете макрос, който прави идентификатор на
низ (стринг)
*/

#include <stdio.h>
#include <stdlib.h>

#define TOSTR(x) #x

int main(){
    
    int pizza = 8;
    char str[] = TOSTR(pizza);
    
    printf("%s\n", str);

    return 0;
}