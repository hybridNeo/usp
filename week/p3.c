#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main(void){

	int fd = open("p3.txt",O_CREAT|O_WRONLY,0640);
	int fd1 = dup2(fd,1);//writes to the file
	char buf[50] = "THis is program 3\n";
	write(fd,buf,strlen(buf));
	write(1,buf,strlen(buf));
	
}
