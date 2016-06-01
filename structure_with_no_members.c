#include <stdio.h>

struct empty {

}empty_dumpty;
/*GCC permits a C structure to have no members*/

int main(){


	printf(" Size of empty struct : %ld\n",sizeof(empty_dumpty));

	return 0;
}
