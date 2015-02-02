#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(void){
	int fd = open("a.txt",O_WRONLY|O_CREAT,0644);
	int fd1 = dup(fd);
	char buf[50] = "Hello this is USP\n";
	write(fd,buf,strlen(buf));
	write(fd1,buf,strlen(buf));
}
