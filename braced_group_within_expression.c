#include <stdio.h>

/*feature is especially useful in making macro definitions “safe” so that they evaluate
each operand exactly once */

//normal max of number def
#define max(a,b) ((a) > (b) ? (a) : (b)) 
//compounded safe define for max of number
#define maxint(a,b) ({int _a=(a); int _b=(b); _a >_b ? _a : _b;})
//if you do not the type of operand
#define max_(a,b) ({typeof(a) _a=(a); typeof(b) _b=(b); _a >_b ? _a : _b;}) 

int main(){

	
	int x = ({int z;
		  int y=0; 
		  for(z=0;z<5;z++){
			y=y+z*2;
	       	  }
		  y;//Will serve the value of the entire construct
		});

	int w = 30;

	printf("value of x is : %d\n",x);
	
	printf("maximum value is:%d\n",max(x,w));
	
	printf("maximum value is:%d\n",maxint(x,w));
	
	printf("maximum value is:%d\n",max_(x,w));

	return 0;
}
