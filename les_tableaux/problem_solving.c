#include<stdio.h>
#include<stdlib.h>

// Multidimensional Arrays ==> 2D Array

//  écrire un programme quiMultidimensional Arrays (Solved Problem) lit un tableau 5 x 5 d'entiers et print la somme des lignes
//  et la somme des colonnes.

int main(){
    
    int x, n;
    //  un tableau 5 x 5 d'entiers
    int r = 5, n = 5;
    int entiers[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25},
    };
    int i, j, sum =0;
    // print le tableau
    for(i =0; i < r; i++){
        for(j = 0; j < n; j++){
            printf("%d ", entiers[i][j]);
        }
        printf("\n");
    }
    printf("\n");  
    printf("Total Rows :");

    for(i =0; i < r; i++){
        for(j = 0; j < n; j++){
            sum +=entiers[i][j];
        }
       printf(" %d",sum);
        sum = 0;
    }

         printf("\n");

    printf("Total Colomns :");

    for(i = 0; i < r; i++){
        for(j = 0; j <r; j++){
            sum +=entiers[j][i];
        }
       printf(" %d",sum);
        sum = 0;
    }

    return 0;
}