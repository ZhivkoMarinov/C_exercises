/*
Напишете масив от структури наречен key_tab[ ], като използвате тази,
дефинирана в горното упражнение - потребителски тип key_t, която
съдържа символен низ и число. Инициализирайте масива с всички
ключови думи на С, като заделяте паметта за всяка ключова дума
динамично. Принтирайте масива.
*/
 
#include <stdio.h>
#include <stdlib.h>
 
#define M 8
#define N 20
 
typedef struct{
    int x;
    char *y;
}key_tt;
 
void setDataKey_tt(key_tt *, char *, int);
 
void displayStructArr(key_tt *, size_t);
 
int main(void)
{
    char key_words[M][N] = {"for", "while", "switch", "if", "else", "break", "struct", "sizeof"};
    key_tt key_tab[M];
    size_t arrSize = sizeof(key_tab) / sizeof(*key_tab);
 
    for (int i = 0; i < arrSize; i++){
        setDataKey_tt(&key_tab[i], key_words[i], i + 1);
    }
 
    displayStructArr(key_tab, arrSize);
}
 
void setDataKey_tt(key_tt *key_tab, char *word, int num){
    key_tab->x = num;
    key_tab->y = (char*) malloc(N);
    key_tab->y = word;
}
 
void displayStructArr(key_tt *structArr, size_t arrSize){
    for (int i = 0; i < arrSize; i++){
        printf("%d - %s\n", structArr[i].x, structArr[i].y);
    }
}