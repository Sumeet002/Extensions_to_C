#include <stdio.h>

int main(){


	int arr1[5] = {34,56,78,90,12};
	int arr2[5] __attribute__((aligned(0x100))) = {34,56,78,90,12};
	int arr3[5] __attribute__((aligned(0x400))) = {34,56,78,90,12};
	int arr4[5] __attribute__((aligned(0x800))) = {34,56,78,90,12};

	printf("%p %p %p %p\n", &arr1[0], &arr1[1], &arr1[2], &arr1[3]);
	printf("%p %p %p %p\n", &arr2[0], &arr2[1], &arr2[2], &arr2[3]);
	printf("%p %p %p %p\n", &arr3[0], &arr3[1], &arr3[2], &arr3[3]);			
	printf("%p %p %p %p\n", &arr4[0], &arr4[1], &arr4[2], &arr4[3]);

	return 0;
}

