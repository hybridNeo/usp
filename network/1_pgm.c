#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(void){
	printf("pid=%d,pgid=%d\n",getpid(),getpgrp());
}
