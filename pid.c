#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(void){
	int pid = fork();
	//pid = fork();
	if(pid==0){
		printf("child %d %d\n",getpid(),getppid());
	}else{
		printf("parent %d %d\n",pid,getpid());
	}
}
