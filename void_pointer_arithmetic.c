#include <stdio.h>

int main(){

	unsigned int a =0x11111111,b=0xffffffff;
	void *ptr1=&b;
	void *ptr2=&a;


	printf("0x%x\n",(*(unsigned int *)ptr1-*(unsigned int *)ptr2)); //void pointer cannot be dereferrenced hence typecast with int*
	printf("0x%x\n",(*(char *)ptr1-*(char *)ptr2));	//void pointer cannot be dereferrenced hence typecast with char*
	printf("%ld\n",((unsigned int *)ptr1-(unsigned int *)ptr2));
	printf("%ld\n",((char *)ptr1-(char *)ptr2));
	printf("sizeof void : %ld\n",sizeof(void)); //size of void is 1


	return 0;
}
