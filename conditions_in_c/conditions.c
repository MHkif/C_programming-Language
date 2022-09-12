#include<stdio.h>
#include<stdlib.h>

/* 

 - Vous pouvez utiliser ces conditions pour effectuer différentes actions pour différentes décisions.

 - C contient les instructions conditionnelles suivantes :

	Utilisez if pour spécifier un bloc de code à exécuter, si une condition spécifiée est vraie
	Utilisez else pour spécifier un bloc de code à exécuter, si la même condition est fausse
	Utilisez else if pour spécifier une nouvelle condition à tester, si la première condition est fausse
	Utilisez switch pour spécifier de nombreux blocs de code alternatifs à exécuter 
	
*/


int main(){
	
//    =====   Les Conditions   =====
	// L'instruction if  : 
	// L'instruction if est la structure de test la plus basique, on la retrouve dans tous les langages (avec une syntaxe différente...). Elle permet 
    // d'exécuter une série d'instructions si jamais une condition est réalisée.
	
	// La syntaxe de cette expression est la suivante   :
		// if (condition réalisée) {
		//    liste d'instructions;
		// }
		
	// Exemple  : 
		printf("if  exapmle   : \n");
		if (20 > 18) {
		 printf("20 is greater than 18\n"); }
		
		
	// Remarques   :
		// la condition doit être entre des parenthèses, il est possible de définir plusieurs conditions à remplir avec les opérateurs ET et OU (&& et ||)
		// Par exemple l'instruction suivante teste si les deux conditions sont vraies :  if ((condition1)&&(condition2)) .
		// L'instruction suivante exécutera les instructions si l'une ou l'autre des deux conditions est vraie :   if ((condition1)||(condition2))  .
		// s'il n'y a qu'une instruction, les accolades ne sont pas nécessaires...
		// les instructions situées dans le bloc qui suit else sont les instructions qui seront exécutées si la ou les conditions ne sont pas remplies
		
	// Exemple  : 
		if (18 > 20) printf("20 is greater than 18\n");  
		

	//L'instruction if ... else   :
		// 'instruction if dans sa forme basique ne permet de tester qu'une condition, or la plupart du temps on aimerait pouvoir choisir les instructions 
		// à exécuter en cas de non réalisation de la condition...
		// L'expression if ... else permet d'exécuter une autre série d'instructions en cas de non-réalisation de la condition.
	
		//La syntaxe de cette expression est la suivante :
			
			// if (condition réalisée) {
			//   liste d'instructions
			// }
			//
			// else {
			// 	 autre série d'instructions
			// }
			
		// Une façon plus courte de faire un test  : 
			// Il est possible de faire un test avec une structure beaucoup moins lourde grâce à la structure suivante :
			// (condition) ? instruction si vrai : instruction si faux
			
		// Remarques :
		
			// la condition doit être entre des parenthèses
			// Lorsque la condition est vraie, l'instruction de gauche est exécutée
			// Lorsque la condition est fausse, l'instruction de droite est exécutée
			// En plus d'être exécutée, la structure ?: renvoie la valeur résultant de l'instruction exécutée. Ainsi, cette forme ?: est souvent utilisée comme suit :
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
	
		// L'instruction switch permet de faire plusieurs tests de valeurs sur le contenu d'une même variable. Ce branchement conditionnel simplifie
	    // beaucoup le test de plusieurs valeurs d'une variable, car cette opération aurait été compliquée (mais possible) avec des if imbriqués.
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
		
		// Les parenthèses qui suivent le mot clé switch indiquent une expression dont la valeur est testée successivement par chacun des case.
	    // Lorsque l'expression testée est égale à une des valeurs suivant un case, la liste d'instructions qui suit celui-ci est exécutée. 
		// Le mot clé break indique la sortie de la structure conditionnelle. Le mot clé default précède la liste d'instructions qui sera exécutée si
		// l'expression n'est jamais égale à une des valeurs.
		
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
		//Les boucles sont des structures qui permettent d'exécuter plusieurs fois la même série d'instructions jusqu'à ce qu'une condition 
		// ne soit plus réalisée...
		//On appelle parfois ces structures instructions répétitives ou bien itérations.
		//La façon la plus commune de faire une boucle est de créer un compteur (une variable qui s'incrémente, c'est-à-dire qui augmente de 1 à
		// chaque tour de boucle) et de faire arrêter la boucle lorsque le compteur dépasse une certaine valeur.
		
		// La boucle for
			//L'instruction for permet d'exécuter plusieurs fois la même série d'instructions : c'est une boucle !
			//Dans sa syntaxe, il suffit de préciser le nom de la variable qui sert de compteur (et éventuellement sa valeur de départ,
			// la condition sur la variable pour laquelle la boucle s'arrête (basiquement une condition qui teste si la valeur du compteur dépasse une limite)
			// et enfin une instruction qui incrémente (ou décrémente) le compteur.
			
			//La syntaxe de cette expression est la suivante   :
			
			//for (compteur; condition; modification du compteur) {
			//	liste d'instructions;
			//
			//}
			//Par exemple :
			//
			for (i=1; i<6; i++) {
				printf("%d", i);
			
			}
			//Cette boucle affiche 5 fois la valeur de i, c'est-à-dire 1, 2, 3, 4, 5.
			//Elle commence à i=1, vérifie que i est bien inférieur à 6, etc. jusqu'à atteindre la valeur i=6, pour laquelle la condition ne sera plus réalisée, la boucle s'interrompra et le programme continuera son cours.
			//
			//	
			//il faudra toujours vérifier que la boucle a bien une condition de sortie (i.e. le compteur s'incrémente correctement)
			//une instruction printf(); dans votre boucle est un bon moyen pour vérifier la valeur du compteur pas à pas en l'affichant !
			//il faut bien compter le nombre de fois que l'on veut faire exécuter la boucle :
			//for(i=0;i<10;i++) exécute 10 fois la boucle (i de 0 à 9)
			//for(i=0;i<=10;i++) exécute 11 fois la boucle (i de 0 à 10)
			//for(i=1;i<10;i++) exécute 9 fois la boucle (i de 1 à 9)
			//for(i=1;i<=10;i++) exécute 10 fois la boucle (i de 1 à 10)	
				
		//	
	
		    
				 
	
	return 0;
}
