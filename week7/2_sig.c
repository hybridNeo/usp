#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
int main(void){
	signal(SIGINT,SIG_IGN);
	while(1){}
	pause();

}
