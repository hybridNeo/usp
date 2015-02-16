#include <stdio.h>
#include <stdlib.h>
int main(void){
	int *ptr;
	int *start;
	start = ptr;
	ptr = (int *)malloc(sizeof(int)*10);
	printf("Enter the elements\n");
	int i;
	for(i=0;i<10;i++){
		scanf("%d",ptr+i);
	}
	//ptr = start;
	//printf("%d",start[0]);
	int sum=0;
	for(i=0;i<10;i++){
		sum += *ptr;
		ptr++;
	}
	printf("Sum is %d \n",sum);
}
