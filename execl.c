#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(void){
	int i;
	for(i = 0; i < 255;++i){
		int pid = fork();
		char str[50];
		sprintf(str,"%s","10.1.10.");
		sprintf(str,"%d",i);
		//pid = fork();
		if(pid==0){
			//execl("/bin/ls","ls","-l",(char*)0);
			execlp("ssh","ssh",str,(char *)0);
			printf(str);
		}else{
		//	printf("parent %d %d\n",pid,getpid());
		}
	}
}
