
#include<stdio.h>
#include<stdlib.h>

int max(int a, int b);

int min(int a, int b);

int main(){
    int a, b;

    printf("Enter le nombre a : ");
    scanf("%d", &a);
    printf("Enter le nombre b : ");
    scanf("%d", &b); 

    printf("Le Maximum est : %d \n", max(a, b));
    printf("Le Minimum est : %d \n", min(a, b));

    return 0;
}

int max(int a, int b){
    int max;
    max = a > b ? a : b;
        return max;
}

int min(int a, int b){
    int min;
    min = a < b ? a : b;
        return min;
}