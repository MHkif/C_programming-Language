#include<stdio.h>
#include<stdlib.h>
// Hi
/* 

 - Vous pouvez utiliser ces conditions pour effectuer diff�rentes actions pour diff�rentes d�cisions.

 - C contient les instructions conditionnelles suivantes�:

	Utilisez if pour sp�cifier un bloc de code � ex�cuter, si une condition sp�cifi�e est vraie
	Utilisez else pour sp�cifier un bloc de code � ex�cuter, si la m�me condition est fausse
	Utilisez else if pour sp�cifier une nouvelle condition � tester, si la premi�re condition est fausse
	Utilisez switch pour sp�cifier de nombreux blocs de code alternatifs � ex�cuter 
	
*/


int main(){
	
//    =====   Les Conditions   =====
	// L'instruction if  : 
	// L'instruction if est la structure de test la plus basique, on la retrouve dans tous les langages (avec une syntaxe diff�rente...). Elle permet 
    // d'ex�cuter une s�rie d'instructions si jamais une condition est r�alis�e.
	
	// La syntaxe de cette expression est la suivante   :
		// if (condition r�alis�e) {
		//    liste d'instructions;
		// }
		
	// Exemple  : 
		printf("if  exapmle   : \n");
		if (20 > 18) {
		 printf("20 is greater than 18\n"); }
		
		
	// Remarques   :
		// la condition doit �tre entre des parenth�ses, il est possible de d�finir plusieurs conditions � remplir avec les op�rateurs ET et OU (&& et ||)
		// Par exemple l'instruction suivante teste si les deux conditions sont vraies :  if ((condition1)&&(condition2)) .
		// L'instruction suivante ex�cutera les instructions si l'une ou l'autre des deux conditions est vraie :   if ((condition1)||(condition2))  .
		// s'il n'y a qu'une instruction, les accolades ne sont pas n�cessaires...
		// les instructions situ�es dans le bloc qui suit else sont les instructions qui seront ex�cut�es si la ou les conditions ne sont pas remplies
		
	// Exemple  : 
		if (18 > 20) printf("20 is greater than 18\n");  
		

	//L'instruction if ... else   :
		// 'instruction if dans sa forme basique ne permet de tester qu'une condition, or la plupart du temps on aimerait pouvoir choisir les instructions 
		// � ex�cuter en cas de non r�alisation de la condition...
		// L'expression if ... else permet d'ex�cuter une autre s�rie d'instructions en cas de non-r�alisation de la condition.
	
		//La syntaxe de cette expression est la suivante :
			
			// if (condition r�alis�e) {
			//   liste d'instructions
			// }
			//
			// else {
			// 	 autre s�rie d'instructions
			// }
			
		// Une fa�on plus courte de faire un test  : 
			// Il est possible de faire un test avec une structure beaucoup moins lourde gr�ce � la structure suivante :
			// (condition) ? instruction si vrai : instruction si faux
			
		// Remarques :
		
			// la condition doit �tre entre des parenth�ses
			// Lorsque la condition est vraie, l'instruction de gauche est ex�cut�e
			// Lorsque la condition est fausse, l'instruction de droite est ex�cut�e
			// En plus d'�tre ex�cut�e, la structure ?: renvoie la valeur r�sultant de l'instruction ex�cut�e. Ainsi, cette forme ?: est souvent utilis�e comme suit :
			// position = ((enAvant == 1) ? compteur+1 : compteur-1);
			 
			// Exemple  : 
				int grater  =  (20 > 18) ? printf("20 is greater than 18\n") : printf("18 is greater than 20\n") ;
				
		
		// IF - ELSE  Example   :
		    printf("if - else exapmle   : \n");
		    int n;
			char* a[] = {"one", "two", "three", "four", "five", "six",  "seven", "eight", "nine"};
		    scanf("%d", &n);
		    if(1 <= n && n <= 9){
		        printf("%s", a[n-1]);
		        
		    }else if(n > 9){
		        printf("Greater than 9");
		    }
		    
		    
		    
	// L'instruction switch    :
	
		// L'instruction switch permet de faire plusieurs tests de valeurs sur le contenu d'une m�me variable. Ce branchement conditionnel simplifie
	    // beaucoup le test de plusieurs valeurs d'une variable, car cette op�ration aurait �t� compliqu�e (mais possible) avec des if imbriqu�s.
		// Sa syntaxe est la suivante :
		
		// switch (Variable) {
		//
		// case Valeur1 :
		// 	Liste d'instructions;
		// 	break;
		//
		// case Valeur2 :
		// 	Liste d'instructions;
		//	 break;
		//
		// case Valeurs... :
		// 	Liste d'instructions;
		//	 break;
		//
		// default: 
		// 	Liste d'instructions;
		//}
		
		// Les parenth�ses qui suivent le mot cl� switch indiquent une expression dont la valeur est test�e successivement par chacun des case.
	    // Lorsque l'expression test�e est �gale � une des valeurs suivant un case, la liste d'instructions qui suit celui-ci est ex�cut�e. 
		// Le mot cl� break indique la sortie de la structure conditionnelle. Le mot cl� default pr�c�de la liste d'instructions qui sera ex�cut�e si
		// l'expression n'est jamais �gale � une des valeurs.
		
		// Switch Example   :
	       		 int day = 1;

			switch (day) {
			  case 1:
			    printf("Monday");
			    break;
			  case 2:
			    printf("Tuesday");
			    break;
			  case 3:
			    printf("Wednesday");
			    break;
			  case 4:
			    printf("Thursday");
			    break;
			  case 5:
			    printf("Friday");
			    break;
			  case 6:
			    printf("Saturday");
			    break;
			  case 7:
			    printf("Sunday");
			    break;
			}

			// Outputs "Monday" (day 1)
	
	//	Les boucles
		//Les boucles sont des structures qui permettent d'ex�cuter plusieurs fois la m�me s�rie d'instructions jusqu'� ce qu'une condition 
		// ne soit plus r�alis�e...
		//On appelle parfois ces structures instructions r�p�titives ou bien it�rations.
		//La fa�on la plus commune de faire une boucle est de cr�er un compteur (une variable qui s'incr�mente, c'est-�-dire qui augmente de 1 �
		// chaque tour de boucle) et de faire arr�ter la boucle lorsque le compteur d�passe une certaine valeur.
		
		// La boucle for
			//L'instruction for permet d'ex�cuter plusieurs fois la m�me s�rie d'instructions : c'est une boucle !
			//Dans sa syntaxe, il suffit de pr�ciser le nom de la variable qui sert de compteur (et �ventuellement sa valeur de d�part,
			// la condition sur la variable pour laquelle la boucle s'arr�te (basiquement une condition qui teste si la valeur du compteur d�passe une limite)
			// et enfin une instruction qui incr�mente (ou d�cr�mente) le compteur.
			
			//La syntaxe de cette expression est la suivante   :
			
			//for (compteur; condition; modification du compteur) {
			//	liste d'instructions;
			//
			//}
			//Par exemple :
			//
			for (int i=1; i<6; i++) {
				printf("%d", i);
		
			}
			//Cette boucle affiche 5 fois la valeur de i, c'est-�-dire 1, 2, 3, 4, 5.
			//Elle commence � i=1, v�rifie que i est bien inf�rieur � 6, etc. jusqu'� atteindre la valeur i=6, pour laquelle la condition ne sera plus r�alis�e, la boucle s'interrompra et le programme continuera son cours.
			//
			//	
			//il faudra toujours v�rifier que la boucle a bien une condition de sortie (i.e. le compteur s'incr�mente correctement)
			//une instruction printf(); dans votre boucle est un bon moyen pour v�rifier la valeur du compteur pas � pas en l'affichant !
			//il faut bien compter le nombre de fois que l'on veut faire ex�cuter la boucle :
			//for(i=0;i<10;i++) ex�cute 10 fois la boucle (i de 0 � 9)
			//for(i=0;i<=10;i++) ex�cute 11 fois la boucle (i de 0 � 10)
			//for(i=1;i<10;i++) ex�cute 9 fois la boucle (i de 1 � 9)
			//for(i=1;i<=10;i++) ex�cute 10 fois la boucle (i de 1 � 10)	
	// L'instruction while
    	// L'instruction while représente un autre moyen d'exécuter plusieurs fois la même série d'instructions.

		// La syntaxe de cette expression est la suivante :
			// while (condition réalisée) {
			// 	liste d'instructions;

			// }
        // Cette instruction exécute la liste d'instructions tant que (while est un mot anglais qui signifie tant que)
		//  la condition est réalisée.

		// La condition de sortie pouvant être n'importe quelle structure conditionnelle, les risques de boucle infinie
		//  (boucle dont la condition est toujours vraie) sont grands, c'est-à-dire qu'elle risque de provoquer un plantage
		//  du programme en cours d'exécution !
		// Exapmle : 
			int x=1;

			while (x<=10) {
				if (x == 7) {
					printf("Division par zéro !");

					continue;
				}
				int a = 1/(x-7);

				printf("%f", a);

				x++;

			}
		    
				 
	
	return 0;
}
