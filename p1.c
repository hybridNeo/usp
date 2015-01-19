#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(void){
	char str[100];
	printf("Enter some text to write \n");
	gets(str);
	int fd,sa;
	fd = open("out.txt",O_RDWR|O_CREAT|O_APPEND,0644);
	if(fd==-1)
		printf("Error writing to file\n");
	else{
		
	 	sa = write(fd,str,strlen(str));
	}
	
	int eof = lseek(fd,0,SEEK_CUR);
	char write_buf[eof];
	lseek(fd,0,SEEK_SET);
	read(fd,write_buf,eof);
	printf("*****DATA**READ*****\n");
	printf("%s",write_buf);
	close(fd);	
	
}
