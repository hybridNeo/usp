#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<dirent.h>
#include<stdio.h>
int remove_directory(const char*);
int main(int argc, char **argv)
{
	DIR *dp;
	
	int re;
	char name[1000];
	if(argc<2)
	{
		printf("INvalid arguments\n");
		exit(0);
	}
	else
	{
			remove_directory(argv[1]);
	}

}


int remove_directory(const char *path)
{
   DIR *d = opendir(path);
   int path_len = strlen(path);
   int r = -1;

   if (d)
   {
      struct dirent *p;

      r = 0;

      while (!r && (p=readdir(d)))
      {
          int r2 = -1;
          char *buf;
          int len;

          if (!strcmp(p->d_name, ".") || !strcmp(p->d_name, ".."))
          {
             continue;
          }

          
          len = path_len + strlen(p->d_name) + 2; 
          buf = malloc(len);

          if(buf)
          {
             struct stat statbuf;
			
	   snprintf(buf, len, "%s/%s", path, p->d_name);
			 
			 printf("Deleting %s\n",buf);	
             if (!stat(buf, &statbuf))
             {
                if (S_ISDIR(statbuf.st_mode))
                {
                   r2 = remove_directory(buf);
                }
                else
                {
                   r2 = unlink(buf);
                }
             }

             free(buf);
          }

          r = r2;
      }

      closedir(d);
   }else{
	printf("Invalid Directory\n");
}


   if (!r)
   {
      r = rmdir(path);
   }

   return r;
}
