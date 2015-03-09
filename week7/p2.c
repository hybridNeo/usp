#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void sighandler(int signo){
	printf("Caught Process id is %d \n",getpid());
}
int main(void){
	signal(SIGALRM,sighandler);
	alarm(2);
	int pid = fork();
	if(pid == 0){
		printf("Child %d \n",getpid());

	}else{
		printf("Parent %d \n",getpid());
	}
	while(1){
		pause();
	}
}
