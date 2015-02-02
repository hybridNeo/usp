#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
int main(int argc , char **argv){

	if(argc != 2){
		printf("Invalid Arguments");
		exit(1);
	}
	struct stat buf;
	stat(argv[1],&buf);
	if(S_ISREG(buf.st_mode))
		printf("regular file \n");
	if(S_ISCHR(buf.st_mode))
		printf("Character file\n");
	if(S_ISBLK(buf.st_mode))
		printf("block file\n");
	if(S_ISFIFO(buf.st_mode))
		printf("FIFO file\n");
	if(S_ISSOCK(buf.st_mode))
		printf("Socket File\n");

}
