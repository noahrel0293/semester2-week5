/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Noah Leach
 * ID: 202029280
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void){
	long decimal=0;
	char hex[9];
	bool breakval = false;
	int hexval;
	int multiplier = 1;
	long long decival;
	int switchval;
	int forval;

	printf("Enter a hexadecimal:");
	fgets(hex, sizeof(hex), stdin);
	
	//checks for error in input by comparing each character in hex against cases in switch
	for(int k=0; k<(strlen(hex)-1); k++){
		switch(hex[k]){
			case '0':
				break;
			case '1':
				break;
			case '2':
				break;
			case '3':
				break;
			case '4':
				break;
			case '5':
				break;
			case '6':
				break;
			case '7':
				break;
			case '8':
				break;
			case '9':
				break;
			case 'A':
				break;
			case 'a':
				hex[k]='A';
				break;
			case 'B':
				break;
			case 'b':
				hex[k]='B';
				break;
			case 'C':
				break;
			case 'c':
				hex[k]='C';
				break;
			case 'D':
				break;
			case 'd':
				hex[k]='D';
				break;
			case 'E':
				break;
			case 'e':
				hex[k]='E';
				break;
			case 'F':
				break;
			case 'f':
				hex[k]='F';
				break;
			default:
				printf("Error: Invalid Hexadecimal\n");
				breakval = true;
		}
		// ensures the validation stops once the first error is found
		if(breakval== true){
			break;
		}

	}
	/* i ran into an issue where strings of 8 characters worked differently in my code to strings of <8 characters.
	e.g. inputting 4C9 would cause strlen(hex)=4 whereas inputting FFFFFFFF would cause strlen(hex)=9.
	I think this is because inputting strings of <8 characters means there is space for a \0 character that is typically at the end of strings.
	This means that inputting 4C9 makes hex={'4', 'C', '9', '\0'} whereas inputting FFFFFFFF makes hex={'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F'}.
	This is because hex is only 8 characters long*/
	//this section changes certain values in the calculation of hex->decimal
	if(strlen(hex) == 8){
		switchval = strlen(hex)-1;
	}else{
		switchval = strlen(hex)-2;
	}
	if(strlen(hex) == 8){
		forval = strlen(hex);
	}else{
		forval = strlen(hex)-1;
	}

	// If statement so that if an error appears in validation, the program doesn't do any calculations
	if(breakval == false){
		// cycles through each character
		for(int i=0; i<(forval); i++){
			// converts characters into integers that can be used for calculations
			switch(hex[switchval-i]){
			case '0':
				hexval = 0;
				break;
			case '1':
				hexval = 1;
				break;
			case '2':
				hexval = 2;
				break;
			case '3':
				hexval = 3;
				break;
			case '4':
				hexval = 4;
				break;
			case '5':
				hexval = 5;
				break;
			case '6':
				hexval = 6;
				break;
			case '7':
				hexval = 7;
				break;
			case '8':
				hexval = 8;
				break;
			case '9':
				hexval = 9;
				break;
			case 'A':
				hexval = 10;
				break;
			case 'B':
				hexval = 11;
				break;
			case 'C':
				hexval = 12;
				break;
			case 'D':
				hexval = 13;
				break;
			case 'E':
				hexval = 14;
				break;
			case 'F':
				hexval = 15;
				break;
			}

			// multiplies the value of the character by the multiplier of the current place value
			decival = hexval * multiplier;
			
			/* These printf statements are so i can keep track of each variable in the calculation for debugging.
			There is probably an easier way to do this using debugging tools but when im writing this im already confused
			enough with the problem that i don't want to deal with another thing to figure out.*/
			//printf("%d\n", forval);
			//printf("%d\n", switchval);
			//printf("%d\n", multiplier);
			//printf("%d\n", i);
			//printf("%d\n", switchval-i);
			//printf("%c\n", hex[switchval-i]);
			//printf("%d\n", hexval);
			//printf("%lld\n", decival);

			// adds the value of the current character with place value considered with the total of all the other characters counted so far
			decimal = decimal + decival;

			// increases place value for use in next iteration
			// multiplier starts at 1 and is multiplied by 16 each time
			multiplier = multiplier * 16;
		}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	}
	return 0;
}