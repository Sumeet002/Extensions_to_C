#include <stdio.h>

union foo {

	int i;
	double d;
	char s[94];

};

void msg(union foo u){

	printf("Function argument as union cast %d\n",u.i);
}

int main(){

	
	int x =10;
	double y = 10.5;
	
	union foo u1,u2;
	u1 = (union foo)x;
	u2 = (union foo)y;

	
	printf("Sizeof Union1:int:%ld\n",sizeof(u1.i));
	printf("Sizeof Union1:double:%ld\n",sizeof(u1.d));
	printf("Sizeof Union1:char array:%ld\n",sizeof(u1.s));
	printf("Sizeof Union1:total_size:%ld\n",sizeof(u1));


	printf("Union1 : [%d] : [%lf]\n",u1.i,u1.d);
	
	printf("Sizeof Union2:%ld\n",sizeof(u2));
	printf("Union2 : [%d] : [%lf]\n",u2.i,u2.d);

	msg((union foo)x);  /*can also use the union cast as a function argument*/
 
	return 0;
}
