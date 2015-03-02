#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(void){
	int pid = fork();
	if(pid == 0){
		sleep(10);
		printf("Child pid id %d parent pid is %d \n",getpid(),getppid());
		
	}else{
		printf("Parent has started \n");
	}
	printf("After fork\n");


}
