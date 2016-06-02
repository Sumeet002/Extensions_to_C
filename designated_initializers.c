#include <stdio.h>

struct foo{
	int x;
	int y;
	char s[10];		
}; 


int main(){

	int arr1[10]={[2]=5,[6]=19,[8]=15};  //[index] is the designator
	int arr2[10]={[0 ... 4]=4,[5 ... 7]=6,[8 ... 9]=8};
	int arr3[10]={[2]=5,6,7,[5]=8,7,[9]=9};
	
	int i;
	
	printf("Now printing array1\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	printf("Now printing array2\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr2[i]);
	}
	printf("\n");

	printf("Now printing array3\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr3[i]);
	}
	printf("\n");

	struct foo foo1={   //Here .fieldname is a designator
			 .x=5,
			 .y=6,
			 .s="HELLO"};

	printf("Now printing foo1\n");
	printf("[%d]:[%d]:[%s]\n",foo1.x,foo1.y,foo1.s);	


	
	struct foo fooarray[10]={[2].x=10,[5].s="bar",[5].x=15,[7].y=5};
	
	printf("Now printing fooarray\n");
	for(i=0;i<10;i++){

		printf("[%d]:[%d]:[%s]\n",fooarray[i].x,fooarray[i].y,fooarray[i].s);

	}


	return 0;
}
