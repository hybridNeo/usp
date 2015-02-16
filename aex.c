#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void b(void){
	printf("Hello\n");
}
void ab(void){
	printf("This is a \n");
}
int main(){
	int a,i;
	a=sysconf(_SC_ATEXIT_MAX);
	printf("atexitmax=%d\n",a);
	i=atexit(b);
	int j = atexit(ab);
//	int k = atexit(b);
	if(i!=0){
		printf("Error\n");
		exit(1);
	}
	exit(0);
}
