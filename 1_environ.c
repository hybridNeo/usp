#include <stdlib.h>
#include <stdio.h>
int main(void){
	static char  *var  = "LOGINNAME=xyz";
	putenv(var);
	const char *pathvar = getenv("LOGINNAME");
	printf("HOME=%s\n",pathvar?pathvar:"<NULL");
	
}
