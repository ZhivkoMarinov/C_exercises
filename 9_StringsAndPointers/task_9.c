/*
Напишете C програма за броене на срещания на дума в даден низ с помощта на цикъл.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_SIZE 50
// todo -> WHY IT IS NOT WORKING WITH fgets()???
int main()
{    
    
    char heystack[MAX_SIZE] = "this is randomthis word this textthis";        
    //fgets(heystack, MAX_SIZE, stdin);
    
    char needle[MAX_SIZE] = "this";
    //fgets(needle, MAX_SIZE, stdin);
    
    char* ptr = heystack;
    int counter = 0;
    
    while(ptr = strstr(ptr, needle)){
        counter++;
        ptr++;
    }
    
    printf("%d\n", counter);

    return 0;
}
