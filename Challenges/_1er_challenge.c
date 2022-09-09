#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main(){
	int a, b, c ;
	float result, res2;
	int bool=0;
		
	do{
	
     	scanf("%d", &a);
	}while(!isdigit(a));
	/*
	
	while(!isdigit(a)){
	printf("Enter les Factors  ( a, b, c ) : \n");
		printf("a  : ");
     	scanf("%d", &a);
     	
	printf("b  : ");
	scanf("%d", &b);
		
    printf("c  : ");
	scanf("%d",&c);
	printf("\n");
	scanf("%d", &b);
	printf("c  : ");
	scanf("%d",&c);
		
		printf("Enter les Factors  ( a, b, c ) : \n");
			printf("a  : ");
     	scanf("%d", &a);
     	
		};
	

	printf("\n");
		
	
		if(a ==0 && b ==0 && c == 0){
			printf("L'ensemble de solutions  est R ");
		}else if (a== 0 && b == 0 && c != 0){
				printf("L'equation n'a pas de solutions réelle.");
				
		}
		else if(a == 0 && b!= 0 && c != 0){
	     	result = -c / b;
			printf("a une unique solution est  %f ", result);
		}else{
				int delta = pow(b, 2) - 4*a*c;
			if(delta < 0){
			
				printf("\nDelta : %d  Alors ", delta);
				printf("L'equation n'a pas de solutions réelle.");	
			}else if(delta == 0){
				
				printf("\nDelta : %d  Alors ", delta);
				result = -b / (2*a);
				printf("a une unique solution est  %f ", result);		
				
		
			}else if(delta > 0){
				printf("\nDelta : %d  Alors ", delta);
				result = -b + sqrt(delta) / (2*a);
				res2 =  -b - sqrt(delta) / (2*a);
				printf("a deux solutions distinctes   %f  et %f . " , result, res2);
			}else{
				printf("Somthing went wrong !");
			}
			
			
	
		}

	*/
	
	
	return 0;
}

