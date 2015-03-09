#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
void sighandler(int signo){
	printf("Signal is caught\n");
	exit(0);	
}
int main(void){
	signal(SIGABRT,sighandler);
	while(1){}
	pause();
	//exit(1);
}
