#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
int main(void){
	int fd = open("temp.txt",O_CREAT|O_TRUNC|O_RDWR,0644);
	int pid = fork();
	int status;
	if(pid == 0){
		char buf[50] = "This is the child\n"; 
		write(fd,buf,50);
		printf("Finished writing\n");
	}else{
		wait(status);
		char newbuf[50];
		lseek(fd,0,SEEK_SET);
		read(fd,newbuf,50);
		printf("READ \n %s",newbuf);

	}
	
}
