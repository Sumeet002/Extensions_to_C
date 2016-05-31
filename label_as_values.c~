#include <stdio.h>

/*You can get the address of a label defined in the current function (or a containing function) with the unary operator ‘&&’*/
/*One way of using these constants is in initializing a static array that serves as a jump table*/

int main(){

	__label__ foo,bar,hack;
	void *jump_table[]={ &&foo,&&bar,&&hack};

	int i=0;
	int jump=3;
	for(i=0; i < 3; i++){	
		
		if(i==jump)
			goto *jump_table[i];
	}

	bar:
		printf("In bar\n");
		return 0;
	hack:
		printf("In hack\n");
		return 0;
	foo:
		printf("In foo\n");
		return 0;
}
