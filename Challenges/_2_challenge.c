#include<stdio.h>

int main(){
    
    int tableau[] = {0, 7, 0,3, 9, 8, 7};
    int val, pos;
    int len = sizeof(tableau) / sizeof(int);
    printf("Enter the followed data : \n");
    printf("Value : ");
    scanf("%d", &val);
    printf("position : ");
    scanf("%d", &pos);
    
    tableau[pos] = val;

    for(int i =0; i <len; i++){
        if(i == pos)
        {
            int tmp  = val;
            val = tableau[i];
            tableau[i] = tableau[i+1];
            tableau[i+1] = tmp;

        }
            // {0, 7, 0,3, 9, 8, 7};

        printf("%d ", tableau[i]);
    }
    return 0;
}