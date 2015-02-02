#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void){
//	umask(0000);
	int fd = open("a.txt",O_WRONLY|O_CREAT,0644);
	int val1 = fcntl(fd,F_SETFL,O_NONBLOCK);
	int val = fcntl(fd,F_GETFL,0);
	if(val<0){
		printf("error\n");
		exit(1);
	}else{
		int accfg = val & O_ACCMODE;
		printf("val is %d ocreate is %d \n",val,O_CREAT);
		if(accfg == O_RDONLY)
			printf("read\n");
		if(accfg == O_WRONLY)
			printf("write\n");
		if(accfg == O_RDWR)
			printf("Read write\n");	
		if(val & O_APPEND)
		   	printf("append\n");
		#if !defined(_POSIX_C_SOURCE) && defined(O_CREAT)  
		if(val & O_CREAT)
			printf("Create \n");
		#endif
  		#if defined(O_TRUNC)
		if(val & O_TRUNC)
			printf("Truncate\n");	
		#endif
		if(val & O_NONBLOCK){
			printf("Non Blocking \n");
		}
			
	}
	
	
}
