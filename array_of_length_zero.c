#include <stdio.h>

struct foo{

	int x;
	int y[];
}foo1 = {1,{2,3,4}};

struct bar{

	struct foo z;
	int data[3];

}bar1={{5},{6,7,8}};

int main(){


	printf("%d\n",foo1.y[2]);
	printf("%d\n",bar1.z.y[2]);
	printf("%d\n",bar1.z.x);
	printf("%d\n",bar1.data[2]); 

	/*foo is constructed as if it were declared like bar.
	The convenience of this extension is that foo1 has the desired type, 
	eliminating the need to consistently refer to bar1.foo1*/
	
	return 0;
}
