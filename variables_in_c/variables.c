#include<stdio.h>
#include<stdlib.h>
int main(){
//    ======   Variables   =====

	// To create a variable, specify the type and assign it a value:
	
	// Syntax : ==>  type variableName = value;
	    // Where type is one of C types (such as int), and variableName is the name of the variable 
	    // (such as x or myName). The equal sign is used to assign a value to the variable.
	
	// Example  :
	    // Create a variable called num of type int and assign the value 15 to it:
	
	int num = 7;
	
	// You can also declare a variable without assigning the value, and assign the value later:
	
	int number;
	number = 15;
	
	// Output Variables  :
	    // To output variables in C, you must get familiar with something called "format specifiers".
	// Format Specifiers  :
	    // Format specifiers are used together with the printf() function to tell the compiler what type of data
	    // the variable is storing. It is basically a placeholder for the variable value.
	    // A format specifier starts with a percentage sign %, followed by a character.
	    // For example, to output the value of an int variable, you must use the format specifier %d or %i 
	    // surrounded by double quotes, inside the printf() function:
	    // Example : 
	    // int num1 = 7; 
	    // printf("%d", num1);  // Outputs 7
	
	    // To print other types, use [ %c for char  ] and [ %f for float ] :
	
	// Example Create variables : 
	
	int myNum = 10;             // Integer (whole number)
	float floatNum = 7.99;   // Floating point number
	char letter = 'M';       // Character
	
	// Print variables
	
	
	printf("myNum : %d\n", myNum);
	printf("floatNum : %f\n", floatNum);
	printf("letter : %c\n", letter);


//     =====  C Data Types   =====

	//Basic Data Types  :
	
		//The data type specifies the size and type of information the variable will store.
		// these are the most basic ones:
			//  DataType	SIZE             	Description
			//  int	        2 or 4 bytes	    Stores whole numbers, without decimals
			//  floa         4 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
			//  double       8 bytes		    Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
			//  char	        1 byte	        Stores a single character/letter/number, or ASCII values .
			
	//	Basic Format Specifiers  :
	
		//There are different format specifiers for each data type. Here are some of them :
		//  Format Specifier	   Data Type	
		//  %d or %i	           int	
		//  %f        	           float	
		//  %lf	                   double	
		//  %c	                   char	
		//  %s	                   Used for string (String of characters)

//      =====   C Constants   =====
	//When you don't want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant",
    // which means unchangeable and read-only):
	
	// Example : 
		const int myNumber = 100;  // myNum will always be 100
		myNumber = 10;  // error: assignment of read-only variable 'myNumber'
	
	//	You should always declare the variable as constant when you have values that are unlikely to change:
	
	//Example  :
	const int minutesPerHour = 60;
	const float PI = 3.14;

    return 0;
    
    
    
}
