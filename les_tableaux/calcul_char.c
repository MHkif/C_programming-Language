#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   int nDigits = 0, nWhite = 0, nOthers = 0, i;
   char txt[100];

 do{
        printf("\nEntrer le Text : ");
        
            fgets(txt,100,stdin);
            txt[strlen(txt)-1]=0; // remove Enter key

        for(i=0; i < strlen(txt); i++){
            if(txt[i] >= '0' && txt[i] <= '9')
                nDigits++;
            else if(txt[i] == ' ' || txt[i] == '\n' || txt[i] == '\t')
                nWhite++;
            else if(!(txt[i] >= '0' && txt[i] <= '9') && !(txt[i] == ' ' || txt[i] == '\n' || txt[i] == '\t' )){
                
                nOthers++;
            }
        }

        printf("le Text : %s \n", txt);
        printf("le nombre des digits : %d\n", nDigits);
        printf("le nombre des whitespaces : %d\n", nWhite);
        printf("le nombre des autres characteres : %d\n", nOthers);
        
        nDigits=0;
        nWhite =0;
        nOthers = 0;
    }while (strcmp(txt,"exit") != 0 && strlen(txt) != 0);
            
    

  



    return 0;
}