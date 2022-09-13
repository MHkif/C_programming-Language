#include<stdio.h>
#include<stdlib.h>

// écrire un programme pour print des séries de fibonacci
// jusqu'à  n  nombre de termes .

int fibonacci(int n);


int main(){

    int n;
    printf("Entrer le nomber de terms :  ");
    scanf("%d", &n);
    fibonacci(n);

    return 0;

}

int fibonacci(int n ){
    int a = 0, b = 1, res;
        for(int i =0; i<= n; i++){
        printf("\n%d", a);
        res = a +b;
        a = b;
        b = res;
    }
}