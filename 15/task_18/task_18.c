/*  18. Функция на Акерман се дефинира чрез две цели стойности M и N,
както следва:
Akerman(0, N) = N+1
Akerman(M, 0) = Akerman(M-1, 1)
Akerman(M, N) = Akerman(M-1, Akerman(M, N-1))
 Напишете рекурсивна и итеративна функция за изчисляване на
функцията на Акерман по зададени две стойности за M и N.
 */
#include <stdio.h>
int A(int m, int n);

int main()
{
    int m, n;
    printf("Enter first number :: \n");
    scanf("%d", &m);
    printf("Enter second number :: \n");
    scanf("%d", &n);
    printf("\nOUTPUT :: %d\n", A(m, n));

    return 0;
}

int A(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return A(m - 1, 1);
    else
        return A(m - 1, A(m, n - 1));
}