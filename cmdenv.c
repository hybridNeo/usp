#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(int argc,char ** argv){
	int i;
	for(i=1;i<argc;++i){
		printf("%s\n",argv[i]);
	}
	i = 0;
	extern char** environ;
	while(environ[i]){
		printf("%s\n",environ[i++]);
	}
	
}
