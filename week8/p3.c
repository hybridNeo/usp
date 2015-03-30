#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <signal.h>
void child_handler(int sigid){
	printf("In child handler\n");
}
void parent_handler(int sigid){
	printf("In parent handler \n");
}
int main(void){
	int pid = fork();
	if(pid == 0 ){
		signal(SIGINT,child_handler);
		
	}else{
		signal(SIGINT,parent_handler);
		pause();
	}
	
}
