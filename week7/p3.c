#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
struct data{
	int a;
	int b;
}stuff;
void sighandler(int signo){
	//printf("%d %d \n",stuff.a,stuff.b);
	alarm(1);
}
int main(void){
	struct data zeroes= {0,0};
	struct data ones = {1,1};
	signal(SIGALRM,sighandler);
	alarm(1);
	while(1){
		struct data *d;
		d = (struct data* ) malloc(sizeof(struct data));
	}
}
