/*
Запишете в четири последователни байтове в паметта със стойност
0xAA(10101010) и разпечатайте съдържанието на горните байтове, ако типът е: float,
signed int, unsigned int
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned char bytes[]= {0xAA, 0xAA, 0xAA, 0xAA};

    printf("%02hhX\n", *(unsigned int*) &bytes);
    printf("%02hhX\n", *(unsigned int*) &bytes + 1);
    printf("%02hhX\n", *(unsigned int*) &bytes + 2);
    printf("%02hhX\n", *(unsigned int*) &bytes + 3);

}