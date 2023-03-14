/*
Създайте структура диня с два елемента - диаметър и дебелина на кората заделете
динамично с malloc() за масив от А на брой дини от сорт мелон и попълнете данните
за диаметър между 15 и 140 см с функцията rand(), за всяка една диня в масива и
дебелина на кората между 0.5 и 3.5 см. Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от В на брой
дини от сорт пъмпкин и попълнете данните за диаметър между 35 и 95 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.3 и 0.9
см. Намерете средната големина на динята и средната дебелина на кората и ги
съпоставете с тези от втория масив. Изведете на екрана купчината от кой сорт е по
добре да се купи.
Изход: По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct avgValues{
    double avgD;
    double avgP;
    double cleanD;
}avgValues;

typedef struct watermelon{
    double diameter;
    double peel;
}watermelon;

double randomDouble(double, double);

void setData(watermelon*, int, double, double, double, double);

avgValues avgV(watermelon *, int);

void decision(avgValues*, avgValues*);

int main()
{   
    srand(time(NULL));

    int melon_count = 10;
    int pumpkin_count = 10;

    watermelon *melon = (watermelon*) malloc(sizeof(*melon) * melon_count);
    watermelon *pumpkin = (watermelon*) malloc(sizeof(*pumpkin) * pumpkin_count);

    setData(melon, melon_count, 15, 140, 0.5, 3.5);
    setData(pumpkin, pumpkin_count, 35, 95, 0.3, 0.9);

    avgValues mel = avgV(melon, melon_count);
    avgValues pump = avgV(pumpkin, pumpkin_count);

    decision(&mel, &pump);

    return 0;
}

double randomDouble(double min, double max) {
    double num = (max - min) * ( (double)rand() / (double)RAND_MAX ) + min;
    return num;
}

void setData(watermelon *wKind, int len, double dMin, double dMax, double pMin, double pMax){
    for (int i = 0; i < len; i++){
        wKind[i].diameter = randomDouble(dMin, dMax);
        wKind[i].peel = randomDouble(pMin, pMax);
    }
}

avgValues avgV(watermelon *wKind, int len){

    avgValues result;
    result.avgD = 0.0;
    result.avgP = 0.0;
    result.cleanD = 0.0;

    for (int i = 0; i < len; i++){
        result.avgD += wKind[i].diameter;
        result.avgP += wKind[i].peel;
    }

    result.avgD /= len;
    result.avgP /= len;
    result.cleanD = result.avgD - (result.avgP * 2);

    return result;
}

void decision(avgValues* melon, avgValues* pumpikn){

    printf("Melon avg diameter = %lf, avg peel = %lf\n", melon->avgD, melon->avgP);
    printf("Pumpkin avg diameter = %lf, avg peel = %lf\n", pumpikn->avgD, pumpikn->avgP);

    if (melon->cleanD > pumpikn->cleanD){
        printf("It is better to choose melon with clean diameter = %lf\n", melon->cleanD);
        
    }else{
        printf("It is better to choose pumpkin with clean diameter = %lf\n", pumpikn->cleanD);
    }
}