#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main(){
	char *buf[100];
	int a = read(0,buf,100);
	write(1,buf,a);
}
