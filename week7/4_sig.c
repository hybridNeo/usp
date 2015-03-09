#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
void sighandler(int signo){
	printf("Signal is caught\n");
	//exit(0);	
}
int main(void){
	signal(SIGALRM,sighandler);
	alarm(2);
	pause();
	//exit(1);
}
