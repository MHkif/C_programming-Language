#include<stdio.h>
#include<stdlib.h>

//     Bubble Sort 

int main(){
    int n;
    
    printf("Entrer le nomber de tableau : ");
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i < n; i++){
        printf(". %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Les elements : ");
     for(int i= 0; i < n;i++){
         printf(" %d ",arr[i]);
    }

// le tri à bulles Croissant

int var;    
    do
    {
     var = 0;
     for(int i = 0; i < n - 1; i++)
        if(arr[i] > arr[i+1]){
            int tmp = 0; 
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
            var++;
        }
        
    } while (var > 0);
    
     printf("\nLes elements après le tri à bulles Croissant : ");
     for(int i= 0; i < n;i++){
         printf(" %d ",arr[i]);
    }

     do
    {
     var = 0;
     for(int i = 0; i < n - 1; i++)
        if(arr[i] < arr[i+1]){
            int tmp = 0; 
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
            var++;
        }
        
    } while (var > 0);
    
// le tri à bulles Décroissant:
    printf("\nLes elements après le tri à bulles Décroissant : ");
     for(int i= 0; i < n;i++){
         printf(" %d ",arr[i]);
    }
    
    return 0;
}