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
	int decival;

	printf("Enter a hexadecimal:");
	fgets(hex, sizeof(hex), stdin);

	// if input contains invalid hex digit
	for(int k=0; k<(sizeof(hex)-1); k++){
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
			case 'B':
				break;
			case 'C':
				break;
			case 'D':
				break;
			case 'E':
				break;
			case 'F':
				break;
			default:
				printf("Error: Invalid Hexadecimal\n");
				breakval = true;
		}
		if(breakval== true){
			break;
		}

	}
	if(breakval == false){
		for(int i=0; i<(sizeof(hex-1)); i++){
			switch(hex[7-i]){
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
			decival = hexval * multiplier;
			decimal = decimal + decival;
			multiplier = multiplier * 16;
		}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	}
	return 0;
}