#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(void){
	char data[50] = "Unix System Programming";
	int fd = dup(1);
	write(1,data,strlen(data));
	write(fd,data,strlen(data));
	
}
