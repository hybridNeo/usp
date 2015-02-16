#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
int main(int argc,char **argv){
	int fd1 = creat("xyz",0664);
	int fd2 = symlink("xyz",argv[1]);
	struct stat buf;
	lstat(argv[1],&buf);
	char *link = malloc(buf.st_size);
	readlink(argv[1],link,buf.st_size);
	printf("%s->%s\n",argv[1],link);	
}
