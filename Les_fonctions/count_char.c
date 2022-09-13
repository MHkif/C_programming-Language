#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int count_characters(char text[100]);
int count_digits(char text[100]);
int count_whitespaces(char text[100]);

int main(){
      

   int nDigits = 0, nWhite = 0, nOthers = 0, i;
   char txt[100] , enter[100];

   do{
        printf("\nEntrer le Text : ");
    
        fgets(txt,100,stdin);
        txt[strlen(txt)-1]=0; // remove Enter key
        
        nOthers = count_characters(txt);
        nDigits = count_digits(txt);
        nWhite = count_whitespaces(txt);

        // printf("le Text : %s \n", txt);
        printf("le nombre des digits : %d\n", nDigits);
        printf("le nombre des whitespaces : %d\n", nWhite);
        printf("le nombre des autres characteres : %d\n", nOthers);
       
   }while (strcmp(txt,"exit") != 0 && strlen(txt) != 0);

    
    return 0;
}

int count_characters(char text[100]){
    int charactere = 0;
     for(int i=0; i < strlen(text); i++){
        if(!(text[i] >= '0' && text[i] <= '9') && !(text[i] == ' ' || text[i] == '\n' || text[i] == '\t' ))
            charactere++;
    }
    return charactere;
}

int count_digits(char text[100]){
    int digits = 0;
     for(int i=0; i < strlen(text); i++){
        if(text[i] >= '0' && text[i] <= '9')
            digits++;
    } 
    return digits;
}

int count_whitespaces(char text[100]){
    int whitespaces  = 0;
     for(int i=0; i < strlen(text); i++){
        if(text[i] == ' ' || text[i] == '\n' || text[i] == '\t' )
            whitespaces++;
    } 
    return whitespaces;
}
