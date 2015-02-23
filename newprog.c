#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(void){
	char * envp[]={"USER=student","PATH=/tmp",NULL};
	execle("/home/student/env","env","Hello","class",(char*)0,envp);
}
