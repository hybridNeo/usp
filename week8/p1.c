#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
void sigint_handler(int sigid){
	printf("SigInterrupt caught\n");
}
int main(void){
	struct sigaction action;
//	action.sa_handler = SIG_DFL;
	action.sa_handler = sigint_handler;
	sigaction(SIGINT,&action,NULL);
	while(1)
		pause();
}
