/*
Задача 7. Запишете в осем последователни байта в паметта със стойност
0xBB(1011 1011) и разпечатайте съдържанието на горните байтове, ако типът е:
double, signed long long, unsigned long long
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    unsigned char buf[] = {0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB};

    for (int i = 0; i < 8; i++){
        printf("byte %d double = %lf\n",i ,(double) buf[i]);
        printf("byte %d signed long long = %lld\n",i ,(long long int) buf[i]);
        printf("byte %d usigned long long = %lld\n",i ,(unsigned long long) buf[i]);
    }

    return 0;
}