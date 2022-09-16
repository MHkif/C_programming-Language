#include<stdio.h>

// la récursivité est un processus dans lequel une fonction s'appelle
//  directement ou indirectement . 

// Programme pour démontrer une récursivité
int func(int n); // direct recursion

int n =1;
void odd(); 
void even();
void fct(int n);

int main(){

    // direct recursion
    // printf("%d", func(4));
   
    // because n is odd  
    // odd(); // indirect recursion
    // indirect recursion
    fct(14);
    
    return 0;
}

int func(int n){
    if(n == 0)
        return 1;
    else 
        return 7 + func(n - 2);
}

void odd(){
    if(n <=10){
        printf("%d ", n+1);
        n++;
        even();
    }
    return;
}

void even(){
    if(n <=10){
        printf("%d ", n-1);
        n++;
        odd();
    }
    return;
}

void fct(int n){
   n * (n-1);
    if(n != 0){
        fct(n / 2);
        printf("%d", n%2);
    }
}