#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(void){
	fork();
	printf("First \n");
	fork();
	printf("Second\n");
}
