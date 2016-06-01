#include <stdio.h>
#include <math.h>

float rect(int width,int height,int option){

	float properties[3]={(width*height),2*(width+height),sqrt(width*width+height*height)}; //non_constant_initializers
	
	switch(option){

		case 0:
			return properties[0];
			break;	
		case 1:
			return properties[1];
			break;
		case 2:
			return properties[2];
			break;
		default:
			return 0;
			break;

	}

}

int main(){

	int height = 3;
	int width = 4;
	int option = 1;

	float props = rect(width,height,option);

	switch(option){

		case 0:
			printf("Area of rectangle %f\n",props);
			break;	
		case 1:
			printf("Perimeter of rectangle %f\n",props);
			break;
		case 2:
			printf("Diagonal of rectangle %f\n",props);
			break;
		default:
			printf("Invalid option\n");
			break;

	}
	
	return 0;
}
