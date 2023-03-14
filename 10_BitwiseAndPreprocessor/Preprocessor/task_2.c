/*
Напишете макрос с променлив брой параметри,
който
извиква printf със префикс “TRACE: ”
*/

#include <stdio.h>
#include <stdlib.h>

#define VARIADIC(fmt, ...) printf("TRACE: "fmt"\n", ##__VA_ARGS__)

int main(){
    VARIADIC("%s %s", "One", "Two");
    return 0;
}