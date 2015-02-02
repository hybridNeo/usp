#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
int main(void){
	int fd = open("a.txt",O_CREAT|O_WRONLY|O_TRUNC,0644);
	int i= 0;
	while(1){
		int fd1 = dup2(fd,i);
		printf("%d\n",fd1);
		i++;
		if(fd1<0)
			printf("over\n");
	}
}
