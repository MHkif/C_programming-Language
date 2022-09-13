#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Write a program in C to read n number of values in an array and display it in reverse orde .
int main(){
    // char text[] = "abcde";
   int arr[] = {1,5,5};

    for(int i = (sizeof(arr) / sizeof(int)) - 1; i>= 0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}