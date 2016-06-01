#include <stdio.h>

#define search(i,key) (i-key) ? : 0

int main(){

	int key = 9;
	int i,ret;
	for(i=0;i<20;i++){
		ret = search(key,i);
		ret ? : ({printf("key found\n");break;});
		printf("%d\n",ret);
	}
	
	return 0;

}
