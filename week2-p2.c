#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
typedef struct{
	char name[100];
	char usn[10];
}student;
int main(void){
	int fd,sa;
	
	fd = open("week2-p2.txt",O_RDWR|O_CREAT|O_APPEND,0644);
	if(fd==-1)
		printf("Error opening file \n");
	else{
		student s1;
		printf("Enter your name\n");
		gets(s1.name);
		printf("Enter the USN \n");
		gets(s1.usn);
		//printf("Size of struct is %d \n",sizeof(s1));
		sa = write(fd,&s1,sizeof(student));
	}
	int eof = lseek(fd,0,SEEK_CUR);
	lseek(fd,0,SEEK_SET);
	//printf("End of file is %d \n",eof);
	int num_structs = eof/110;
	student s_read[num_structs];
	read(fd,&s_read,eof);
	int i;
	for(i=0;i<num_structs;i++){
		printf("read: %s \n",s_read[i].name);
		printf("USN: %s  \n**************\n",s_read[i].usn);
	}
	close(fd);
}	
