/*
Дадено е наредено тесте карти.
Наредбата по тежест на карта е:
2,3,4,5,6,7,8,9,10, Вале, Дама, Поп, Асо.
Наредбата по цвят на картите е:
трефа, каро, купа, пика.
Да се създаде програма на C, чрез която се въвежда N естествено число от интервала
[1..51] и се извеждат въведения номер карта и останалите по-големи карти от тестето.
Използвайте вложен цикъл.
Пример:
47
Изход:
Поп купа, Поп пика, Асо трефа, Асо каро, Асо купа, Асо пика
*/

#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int temp = n - 1;
    int coma_counter = 0;
 
    for(int value = temp / 4; value < 13; value++){
        for(int color = temp % 4; color < 4; color++){
            switch(value){
                case 9: printf("Jack of "); break;
                case 10: printf("Queen of "); break;
                case 11: printf("King of "); break;
                case 12: printf("Ace of "); break;
                default: printf("%d of ", value + 2);
            }
 
            switch(color){
                case 0: printf("clubs"); break;
                case 1: printf("diamonds"); break;
                case 2: printf("hearts"); break;
                case 3: printf("spades"); break;
            }
            coma_counter++;
            if(52 - coma_counter >= n){
                printf(", ");
            }else{
                printf("\n");
            }
        }
        temp = 0;
    }
 
 
    return 0;
}