#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(){
	fork();
	fork();
	printf("Hello\n");
}
