#include<stdio.h>
#include<stdlib.h>

// écrire un programme pour print des séries de fibonacci
// jusqu'à  n  nombre de termes .
int fib(int n);


int main(){
    
    int n;
    printf("Entrer le nomber de terms :  ");
    scanf("%d", &n);
    fib(n);

    return 0;

}

int fib(int n ){
    int a = 0, b = 1;
        for(int i =0; i<= n; i++){
        printf("\n%d", a);
        int res = a +b;
        a = b;
        b = res;
    }
}