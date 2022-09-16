#include<stdio.h>
#include<stdlib.h>


struct  date
{
    int day;
    int month ;
    int year;
};

struct student
{
    char first_name[25];
    char last_name[25];
    struct date date;
};


int main(){  
    int n_of_s;
    
    printf("Enter the number of student : ");
    scanf("%d", &n_of_s);
    struct student s1[n_of_s] ; 
    int years[n_of_s];
    int max, pos_max;
    for(int i = 0; i < n_of_s; i++){
        printf("\nStudent %d  : \n", i+1);
        printf("Enter (First name , Last name ) separated by whitespace : ");
        scanf("%s %s", s1[i].first_name, s1[i].last_name);
        printf("Enter date of birth (Day - Month - Year ) separated by whitespace : ");
        scanf("%d %d %d", &s1[i].date.day, &s1[i].date.month, &s1[i].date.year);

        while((s1[i].date.day > 31 || s1[i].date.day < 1 )){
            printf("invalid Day  !! ,  Please Enter a valid Day :  ");
            scanf("%d", &s1[i].date.day);
        }
        
        while(s1[i].date.month > 12 || s1[i].date.month < 1 ){
            printf("invalid Month  !! ,  Please Enter a valid Month :  ");
            scanf("%d", &s1[i].date.month);
            }

        while(s1[i].date.year > 2016 || s1[i].date.year < 1900 ){
            printf("invalid Year  !! ,  Please Enter a valid Year    :  ");
            scanf("%d", &s1[i].date.year);
            }
        years[i] = s1[i].date.year;
        
    }

     printf("\nList of Students : \n");

    for(int i =0; i < n_of_s; i++){
        printf("\nStudent %d  :  ", i+1);
        printf("\nFirst name : %s, Last name : %s .\n", s1[i].first_name, s1[i].last_name);
        printf("Date of birth  ==>  "); 
        printf(s1[i].date.day < 10 ? " Day : 0%d  ,  " : " Day : %d  ,  ",s1[i].date.day);
        printf(s1[i].date.month < 10 ? " Month : 0%d  ,  " : " Month : %d  ,  " ,s1[i].date.month);
        printf(" Year : %d .\n", s1[i].date.year);

    }
     printf(" Years :  ");
     for(int i = 0; i < n_of_s; i++){
            years[i] = s1[i].date.year;
             printf(" %d ", years[i]) ;
        }
        
    // Trier par age 
    
    
   




    return 0;
}