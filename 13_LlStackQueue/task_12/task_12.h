#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct binary{
   int data;
   struct binary *ptr;
}binary;

void push(binary **, int);

void pop(binary **);

binary* createNode(int);

void display(binary *front);

void toBinary(binary **, int);