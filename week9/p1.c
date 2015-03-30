#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "apue.h"
void character(char *a){
	while(*a != '\0'){
		printf("%c",*a);
		fflush(stdout);
		a++;
	}
}
void handler(int sigid){
	printf("In the handler \n");
}



int main(void){
	//int status;
	TELL_WAIT();
	int pid = fork();
	if(pid == 0){
		//pause();
		WAIT_PARENT();	
		character("child\n");
	}else{
		character("parent\n");
		TELL_CHILD(pid);
		//kill(pid,SIGUSR1);
		//pause();
		//wait(&status);
		//sleep(1);
	}
}
