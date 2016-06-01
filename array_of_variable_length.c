#include <stdio.h>
#include <string.h>

void print_msg2(int len; char s[len],int len){

	printf("From Print_Msg2 : %s\n",s);
}

void print_msg3(int len,char s[len]){

	printf("From Print_Msg3 : %s\n",s);
}


void print_msg1(char *s1,char *s2){

	int len = strlen(s1) + strlen(s2) + 1;
	printf("Length of final string %d\n",len);
	char msg[len];
	
	strcpy(msg,s1);
	strcat(msg,s2);

	printf("From Print_Msg1 : %s\n",msg);

	print_msg2(msg,len);
	print_msg3(len,msg);
}



int main(){

	char *s1 = "Hello ";
	char *s2 = "World!";

	printf("Length of first string %ld\n",strlen(s1));
	printf("Length of second string %ld\n",strlen(s2));
	print_msg1(s1,s2);


	return 0;
}
