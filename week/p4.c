#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main(void){
	int fd = open("a.txt",O_WRONLY|O_TRUNC,0644);
	int fd1 = open("b",O_WRONLY|O_TRUNC,0644);
	dup2(fd,fd1);
	char buf[50] = "This is program 4\n";
	write(fd,buf,strlen(buf));
	write(fd1,buf,strlen(buf));
	
}
