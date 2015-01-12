/* Write a program to write 100 bytes of data to a file and then read the data */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(){
	char buf[100]= "WElcome to the Usp class";
	int fd,sa;
	fd = open("out.txt",O_RDWR|O_CREAT, 0644);
	if(fd==-1){
		printf("error in opening the file\n");
	}else{
		sa = write(fd,buf,strlen(buf));
	}
	lseek(fd,0,SEEK_SET);
	int n = read(fd,buf,sa);
	printf("number of bytes read = %d\n",n);
	close(fd);
	
}
