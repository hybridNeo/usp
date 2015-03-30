#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
void child_handler(int sigid){
	printf("In child handler\n");
}
void parent_handler(int sigid){
	printf("In parent handler \n");
}
int main(void){
	sigset_t set,oldset;
	sigemptyset(&set);
	sigaddset(&set,SIGALRM);
	sigaddset(&set,SIGINT);
	sigaddset(&set,SIGUSR1);
	sigaddset(&set,SIGQUIT);
	
	sigprocmask(SIG_BLOCK,&set,NULL);
	//critical section
	int pid = fork();
	sleep(2);
	if(pid == 0){
		signal(SIGINT,child_handler);
	}else{
		signal(SIGINT,parent_handler);
	}
	pause();
}
