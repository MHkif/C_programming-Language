Readme : 
Une variable est un objet repéré par son nom, pouvant contenir des données, qui pourront être modifiées lors de l'exécution du programme. Les variables en langage C sont typées, c'est-à-dire que les données contenues dans celles-ci possèdent un type, ainsi elles sont donc stockées dans la mémoire et occupent un nombre d'octets dépendant du type de donnée stockée.

En langage C, les noms de variables peuvent être aussi long que l'on désire, toutefois le compilateur ne tiendra compte que des 32 premiers caractères. De plus, elles doivent répondre à certains critères :

un nom de variable doit commencer par une lettre (majuscule ou minuscule) ou un « _ » (pas par un chiffre)
un nom de variable peut comporter des lettres, des chiffres et le caractère « _ » (les espaces ne sont pas autorisés !)
les noms de variables ne peuvent pas être les noms suivants (qui sont des noms réservés) :
auto
break
case, char, const, continue
default, do, double
else, enum, extern
float, for
goto
if, int
long
register, return
short, signed, sizeof, static, struct, switch
typedef
union, unsigned
void, volatile
while

 Note : 
Les noms de variables sont sensibles à la casse (le langage C fait la différence entre un nom en majuscules et un nom en minuscules), il faut donc veiller à utiliser des noms comportant la même casse !

La déclaration de variables
Pour pouvoir utiliser une variable, il faut la définir, c'est-à-dire lui donner un nom, mais surtout un type de donnée à stocker afin qu'un espace mémoire conforme au type de donnée qu'elle contient lui soit réservé.

Définition de constantes
Une constante est une variable dont la valeur est inchangeable lors de l'exécution d'un programme. En langage C, les constantes sont définies grâce à la directive du préprocesseur #define, qui permet de remplacer toutes les occurrences du mot qui le suit par la valeur immédiatement derrière elle. Par exemple la directive :

#define _Pi 3.1415927
remplacera tous les identifiants « _Pi » (sans les guillemets) par la valeur 3.1415927, sauf dans les chaînes de caractères :

resultat = _Pi * sin(a); //-> remplacé
resultat = _Pi+1; //-> remplacé
_Pi = 12; //-> remplacé MAIS génère une erreur
resultat = _PiPo; //-> pas remplacé
printf("pi = _Pi "); //-> pas remplacé 
Toutefois, avec cette méthode les constantes ne sont pas typées, il faut donc utiliser la directive #define avec parcimonie...
Il est ainsi préférable d'utiliser le mot clef const, qui permet de déclarer des constantes typées :

const int dix = 10; 
De plus, cela permet d'éviter certains problèmes du #define, qui fait du « chercher-remplacer » textuel sans réfléchir.

Une variable se déclare de la façon suivante :

 type Nom_de_la_variable;
ou bien s'il y a plusieurs variables du même type :

 type Nom_de_la_variable1, Nom_de_la_variable2, ...;
Affectation d'une donnée à une variable
Pour stocker une donnée dans une variable que l'on a initialisée, il faut faire une affectation, c'est-à-dire préciser la donnée qui va être stockée à l'emplacement mémoire qui a été réservé lors de l'initialisation.

Pour cela on utilise l'opérateur d'affectation « = »  :

Nom_de_la_variable = donnée;
Pour stocker le caractère B dans la variable que l'on a appelée Caractere, il faudra écrire :

 Caractere = 'B';
Ce qui signifie stocker la valeur ASCII de « B » dans la variable nommée « Caractere ». Il est bien évident qu'il faut avoir préalablement déclaré la variable en lui affectant le type char :

 char Caractere;
Initialisation d'une variable
La déclaration d'une variable ne fait que « réserver » un emplacement mémoire où stocker la variable. Tant que l'on ne lui a pas affecté une donnée celle-ci contient ce qui se trouvait précédemment à cet emplacement, que l'on appelle garbage (en français détritus).

On peut donc affecter une valeur initiale à la variable lors de sa déclaration, on parle alors d'initialisation :

 type Nom_de_la_variable = donnee;
Par exemple :

 float Toto = 125.36;
