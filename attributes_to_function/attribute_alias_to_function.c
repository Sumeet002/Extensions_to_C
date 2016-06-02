#include <stdio.h>

void __foo(){

	printf("[__foo()]: Hey i got called \n");
}

/*alias attribute causes the declaration to be emitted as an alias for another symbol*/
void foo() __attribute__((weak,alias("__foo"))); 

int main(){

	
	foo();
	

	return 0;
}
