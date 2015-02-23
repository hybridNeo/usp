#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(int argc,char **argv){
	int pid = fork();
	char str[50];
	if(argc < 2){
		printf("invalid argument\n");
		exit(1);
	}
	if(pid==0){
		//execl("/bin/ls","ls","-l",(char*)0);
		printf("deleting %s \n",argv[1]);
		execlp("rm","rm",argv[1],(char *)0);
		printf(str);
	}else{
	//	printf("parent %d %d\n",pid,getpid());
	}
	
}
