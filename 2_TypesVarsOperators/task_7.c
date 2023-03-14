#include <stdio.h>
 
int main()
{   
 
    int padding = 1;
    int reps = 22;
    int rows = 6;
 
    for(int i = 0; i < rows; i++){
        printf("%*c", padding, ' ');
        for(int j = 0; j < reps; j++){
            if(j % 2 == 0){
                printf("#");
            }else{
                printf(" ");
            } 
        }
        printf("\n");
        padding += 2;
        reps -= 4;
    }
 
    printf("\n");
 
    int padding1 = 11;
    int reps1 = 1;
    int rows1 = 6;
 
    for(int i = 0; i < rows1; i++){
        printf("%*c", padding1, ' ');
        for(int j = 0; j < reps1; j++){
            if(j % 2 == 0){
                printf("#");
            }else{
                printf(" ");
            } 
        }
        printf("\n");
        padding1 -= 2;
        reps1 += 4;
    }
 
    printf("\n");
 
    int padding2 = 11;
    int reps2 = 1;
    int rows2 = 11;
    int control = 0;
 
    for(int i = 0; i < rows2; i++){
        printf("%*c", padding2, ' ');
        for(int j = 0; j < reps2; j++){
            if(j % 2 == 0){
                printf("#");
            }else{
                printf(" ");
            } 
        }
 
        if(padding2 < 2){
            control = 1;
        }

        if(control){
            padding2 += 2;
            reps2 -= 4;
 
        }else{
            padding2 -= 2;
            reps2 += 4;
        }

        printf("\n");
    }
 
    return 0;
}