#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
void int_handler(int sigid){
	printf("In interrupt handler\n");
}
int main(void){
	signal(SIGINT,int_handler);
	signal(SIGALRM,SIG_DFL);
	signal(SIGUSR1,SIG_DFL);
	signal(SIGQUIT,SIG_DFL);
	sigset_t set,oldset;
	sigemptyset(&set);
	sigaddset(&set,SIGALRM);
	sigaddset(&set,SIGINT);
	sigaddset(&set,SIGUSR1);
	sigaddset(&set,SIGQUIT);
	
	sigprocmask(SIG_BLOCK,&set,&oldset);
	//critical section
	sleep(2);
	//end of critical section
	sigset_t pending_set;
	sigpending(&pending_set); 
	sigprocmask(SIG_UNBLOCK,&set,NULL);
	while(1)
		pause();
}
