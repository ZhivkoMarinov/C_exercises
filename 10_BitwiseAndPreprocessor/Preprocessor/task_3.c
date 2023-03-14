/*
Напишете макрос, който свързва два
идентификатора в един общ (конкатениране на
идентификатори)
*/

#include <stdio.h>
#include <stdlib.h>

#define CONCAT(x, y) (x##y)

int main(){
    
    int CONCAT(piz, za);
    pizza = 8;
    printf("%d\n", pizza);

    return 0;
}