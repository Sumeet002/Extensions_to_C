#include <stdio.h>
#include <math.h>

int rect(int height,int width,int option){

	int calc_area(int height,int width){ //using parent function's arguments is called lexical scoping
		return height*width;
	}

	int calc_perimeter(int height,int width){
		return 2*(height+width);
	}

	int calc_diagonal(int height,int width){
		return sqrt(((height*height) + (width*width)));
	}

	switch(option){

		case 0:
			calc_area(height,width);
			break;
		case 1:
			calc_perimeter(height,width);
			break;
		case 2:
			calc_diagonal(height,width);
			break;

		default:
			printf("Invalid option")
			break;

	}

}

int main(){

	int height = 3;
	int width = 4;

	/*Options
	0-Area
	1-Perimeter
	2-Diagonal*/

	int option=1;	
	int result=0;
	result=rect(height,width,option);

	switch(option){

		case 0 :
			printf("Area of rectangle is %d\n",result);
			return 0;
		case 1 :
			printf("Perimeter of rectangle is %d\n",result);
			return 0;

		case 2:
			printf("Diagonal of rectangle is %d\n",result);
			return 0;
		default:
			printf("Invalid option\n");
			exit(0);
	}

}

