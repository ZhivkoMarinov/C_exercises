#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Point{
	int x;
	int y;
}Point;

typedef struct Rect{
	Point a;
	Point b;
}Rect;

int max(int, int);

int min(int, int);

Rect* createRect(Point *, Point *);

Point* createPoint(int, int);

int sumArea(Rect *, Rect *);

int section(Rect *, Rect *);

