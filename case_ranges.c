#include <stdio.h>

int main(){

	char option = 'a';

	switch(option){

		case 1 ... 10:
			printf("digit from 1-10\n");
			break;

		case 'A' ... 'Z':
			printf("Uppercase alphabet\n");
			break;	

		case 'a' ... 'z':
			printf("Lowercase alphabet\n");	
			break;


	}	



	return 0;
}
