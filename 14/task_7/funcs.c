#include "task_7.h"

int max(int x, int y){
	return (x > y) ? x : y;
}

int min(int x, int y){
	return (x < y) ? x : y;
}

Rect* createRect(Point *a, Point *b){

	Point temp_a = *a;
	Point temp_b = *b;

	Rect *rect = malloc(sizeof(Rect));
	assert(rect != NULL);
	rect->a = temp_a;
	rect->b = temp_b;

	return rect;
}

Point* createPoint(int x, int y){
	Point *point = malloc(sizeof(Point));
	point->x = x;
	point->y = y;

	return point;
}

int sumArea(Rect *rect1, Rect *rect2){
	int area1 = abs(rect1->a.x - rect1->b.x) * abs(rect1->a.y - rect1->b.y);
	int area2 = abs(rect2->a.x - rect2->b.x) * abs(rect2->a.y - rect2->b.y);
	int sum = area1 + area2;

	return sum;
}

int section(Rect *rect1, Rect *rect2){

	int sumX = abs((rect1->a.x - rect1->b.x) + (rect2->a.x - rect2->b.x));
	int sumY = abs((rect1->a.y - rect1->b.y) + (rect2->a.y - rect2->b.y));

	int overlapXstart = min(rect1->a.x, rect2->a.x);
	int overlapXend = max(rect1->b.x, rect2->b.x);

	int overlapYstart = max(rect1->a.y, rect2->a.y);
	int overlapYend = min(rect1->b.y, rect2->b.y);

	int overlapX = (overlapXstart + overlapXend) - sumX;
	int overlapY = (overlapYstart + overlapYend) - sumY;
	
	if(overlapX >= 0 || overlapY >= 0){
		return 0;
	}
	else{
		return (overlapX * overlapY);
	} 
	
}