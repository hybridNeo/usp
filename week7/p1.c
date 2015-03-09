//wap to catch SIGUSR1 SIGUSR2 SIGKILL SIGSTOP SIGTERM signals
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
void sighandler(int signo){
	switch(signo){
		case SIGUSR1:
			printf("SIGUSR1 caught\n");
			break;
		case SIGUSR2:
			printf("SIGUSR2 caught\n");
			break;
		case SIGKILL:
			printf("SIGKILL caught \n");
			break;
		case SIGSTOP:
			printf("SIGSTOP caught\n");
			break;
		case SIGTERM:
			printf("SIGTERM caught\n");
			break;
	}
}
int main(void){
	signal(SIGUSR1,sighandler);	
	signal(SIGUSR2,sighandler);	
	signal(SIGKILL,SIG_IGN);	
	signal(SIGSTOP,SIG_IGN);	
	signal(SIGTERM,SIG_IGN);	
	//signal(SIGUSR1,sighandler);	
	while(1){
		pause();
	}
}
	
