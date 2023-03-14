#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct parenth{
   char data;
   struct parenth *ptr;
}parenth;

void push(parenth **, char);

void pop(parenth **);

parenth* createNode(char);

void display(parenth *front);

bool check(char *);