#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(void){
	char *argv[] = { "cat","a","b",NULL};
	execv("bin/cat",argv);
}
