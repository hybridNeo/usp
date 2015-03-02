#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(void){
	int pid = fork();
	if(pid==0){
		printf("This is child process \n");
	}else{
		sleep(10);
		printf("This is parent process \n");
	
	}
}
