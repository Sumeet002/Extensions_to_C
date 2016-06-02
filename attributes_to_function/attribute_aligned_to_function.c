#include <stdio.h>

/*attribute specifies a minimum alignment for the function, measured in bytes*/
void __attribute__((aligned(0x400))) bar(){ 
	printf("%p\n", &bar);
}


int main(){

	bar();

	return 0;
}
