#include <stdio.h>
#include <string.h>

#define SEARCH(array,key) ({ __label__ found;\
			     int key_ = (key);\
			     int *array_ = (array);\
			     int i;\
			     int success=0;\
			     int len = 10;\
			     for (i = 0; i < len; i++){\
					if (array[i]==key){\
						success=1;\
						goto found;}}\
			     found:\
				success;\
			  })

 

int main(){

	int search_array[10];
	int i=0;
	int key=85;	
	for(i=0 ; i< 10 ; i++){

		search_array[i]=rand()%100;
		printf("%d\n",search_array[i]);
	}
	
	if(SEARCH(search_array,key) == 0)
		printf("said key %d not found\n",key);
	else
		printf("said key %d found\n",key);

	return 0;

}
