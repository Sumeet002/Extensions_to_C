#include <stdio.h>


#define INFO 1
#define ERR 2
#define STD_OUT stdout
#define STD_ERR stderr

#define MSG(cmd,stream,msg,...) {char *str;\
			  if(cmd == ERR)\
			  	str="ERR";\
			  else if(cmd ==INFO)\
				str="INFO";\
			  fprintf(stream,"[%s]: %s : "msg"\n",str,__FILE__,##__VA_ARGS__);}

int main(){

	char *s = "Mississippi";

	MSG(ERR,STD_ERR,"What the hell err!");
	
	/*String argument*/
	MSG(INFO,STD_OUT,"1 %s : 2 %s : 3 %s : 4 %s",s,s,s,s);

	/*Integer argument*/
	MSG(INFO,STD_OUT,"%d * %d = %d",2,2,2*2);
	
	return 0;
}
