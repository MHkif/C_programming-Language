#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct
{
    int code;
    char nom[50];
    int quantite;
    double prix, prixTTC;
} Produit;

// list of struct Produit
typedef struct
{
    Produit *elements;
    int length;
} List;

void AddProd(List *list, Produit p);
void DisplayProdList(List list , int len);
void ListedAlphaCroissant(List *l);
void ListedPrixDecroissant(List *l);
double prixTTC(double price);
// void BuyProd();
void ByCode(List *l);
void ByQnt(List *l);

void SearchProd(List *l);

int main()
{
    List l = {NULL, 0};
    Produit pr;


    // AddProd(&l, pr);
    // ListedAlphaCroissant(&l);
    // ListedPrixDecroissant(&l);
    // SearchProd(&l);

    return 0;
}


double prixTTC(double price){
    double priceTTC = price + (price * 15/100);
    return priceTTC;
}

void AddProd(List *list, Produit p)
{
     int n;
     char buffer[50];
      
    printf("Enter the number of records  : ");
       fgets(buffer,50,stdin);
       sscanf(buffer,"%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nEnter the informations of Product %d :  \n", i +1);
        printf("Le code  :  ");
        fgets(buffer,50,stdin);
        sscanf(buffer,"%d", &p.code);
        printf("Le nom  :  ");
        fgets(buffer,50,stdin);
        sscanf(buffer,"%s", p.nom);
        printf("La quantite  :  ");
        fgets(buffer,50,stdin);
        sscanf(buffer, "%d", &p.quantite);
        printf("Le prix  :  ");
        fgets(buffer,50,stdin);
        sscanf(buffer, "%lf", &p.prix);

        p.prixTTC = prixTTC(p.prix);

    list->length++;

    if (list->elements == NULL) 
        list->elements = calloc(list->length, sizeof(Produit));
    
    else
        list->elements = realloc(list->elements, list->length * sizeof(Produit));
    
    list->elements[list->length - 1] = p;
 }

} 

void printProduit(Produit p){
        printf("\nLe Code  :  %d \n", p.code);
        printf("Le Nom  :  %s \n", p.nom);
        printf("La Quantite  :  %d \n", p.quantite);
        printf("Le Prix  :  %.2lf \n", p.prix);
        printf("Le Prix TTC :  %.2lf \n", p.prixTTC);
}

void DisplayProdList(List l, int len){
    printf("\nAfficher Les Produits : \n");
    printf("\n%d Produits . \n", len);

    for (int i = 0; i < len; i++){
       len > 1 ? printf("\nProduits  %d : ", i + 1) : printf("") ;
       printProduit(l.elements[i]);
    }

}

void  ListedAlphaCroissant(List *l){
   
    printf(" \n lister tous les produits selon l’ordre alphabetique  croissant du nom. a à z. \n");
   for (int i = 0; i < l->length -1; i++) {
      for (int j = i+1; j <l->length ; j++)
    
         if (strcasecmp(l->elements[i].nom, l->elements[j].nom) > 0) {
            Produit tmp;
            tmp = l->elements[i];
            l->elements[i] = l->elements[j];
            l->elements[j] = tmp;
            
         }
         DisplayProdList(*l, l->length);
     }

}


void  ListedPrixDecroissant(List *l){
    //  lister tous les produits selon l’ordre  décroissant du prix.
printf(" \n lister tous les produits selon l’ordre  decroissant du prix. \n");
   for (int i = 0; i < l->length -1; i++) {
      for (int j = i+1; j <l->length ; j++)
    
         if (strcasecmp(l->elements[i].prix, l->elements[j].prix) > 0) {
            Produit tmp;
            tmp = l->elements[i];
            l->elements[i] = l->elements[j];
            l->elements[j] = tmp;
            
         }
         DisplayProdList(*l, l->length);
     }

}

// void BuyProd(){
//     // permet de mettre à jour la quantité après avoir introduit le code produit 
//     // et la quantité à déduire.
    
//     // Acheter produit : 
//     // N.B :Pour chaque produit acheté, vous devez enregistrer le prix TTC et la date d’achat.

// }

void SearchProd(List *l){
 // Rechercher les produits Par :
 // Code
    int choix;
    char buffer[50];
    printf("\n*  Search By   : \n");
    printf("1- Code  .\n");
    printf("2- Quantite  .\n");
    printf(" Enter your choice : ");
    fgets(buffer,10,stdin);
    sscanf(buffer,"%d", &choix);

    switch(choix){
        case 1: ByCode(l);
                break;
        case 2: ByQnt(l);
                 break;
        default : {};
    }
   



}


void ByCode(List *l){

    int code;
    char buffer[12];
    printf("\nEnter the Code of the Product  :  ");
    fgets(buffer,10,stdin);
    sscanf(buffer,"%d", &code);

    for(int i =0; i < l->length; i++){
        if(l->elements[i].code == code)
        {
            printf("\n" );
            printProduit(l->elements[i]);
            return;
        }
    }
    printf("\n" );
    printf("Product Code Not Found .\n" );

}

void ByQnt(List *l){
    int qnt;
    int n = 0;
    char buffer[12];
    printf("\nEnter the Quantity of the Product  :  ");
    fgets(buffer,10,stdin);
    sscanf(buffer,"%d", &qnt);

    for(int i =0; i < l->length; i++){
        if(l->elements[i].quantite == qnt)
        {
            n++;
           printf("\n" );

        //    printProduit(l->elements[i]);
        //    return;
        }
    }

     if(n > 0)
        DisplayProdList(*l, n);
    else
        printf("Product Quantity Not Found .\n" );
}
