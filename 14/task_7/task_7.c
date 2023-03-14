/*
Дадени са два правоъгълника със страни успоредни на координатните оси. Да се намерят:
сумата от лицата им, лицето на обединението и сечението им.
Вход. На всеки от редовете на стандартния вход ще бъде зададена по една двойка
правоъгълници с осем цели неотрицателни числа – координати на горния ляв и долния десен
ъгъл на единия и другия правоъгълник.
Ограничения. Всички числа са по-малки или равни на 100.
Изход. За всяка двойка правоъгълници, на един ред на стандартния изход програмата трябва да
изведе 3 числа — сумата от лицата на двата правоъгълника, лицето на обединението и лицето
на сечението им.
*/

#include "task_7.h"

int main(void){

	Point *a1 = createPoint(0, 2);
	Point *b1 = createPoint(3, 1);	
	Rect *rect1 = createRect(a1, b1);

	Point *a2 = createPoint(1, 3);
	Point *b2 = createPoint(2, 0);	
	Rect *rect2 = createRect(a2, b2);

	int sum = sumArea(rect1, rect2);
	int sec = section(rect1, rect2);
	int unification = sum - sec;
	printf("%d %d %d\n", sum, unification, sec);								
	return 0;
}


/*
0 1  1 0	 0 2  2 0 -> 5 4 1
0 1  1 0	 2 1  3 0 -> 2 2 0
0 2  3 1	 1 3  2 0 -> 6 5 1
x y  x y     x y x y
*/