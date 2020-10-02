//write a program which accept file name from user,and open that file.

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
int fd=0;

if(argc!=2)
{
printf("Error:Invalid Number of Argument\n");
return -1;
}
if((strcmp(argv[1],"-h")==0)||(strcmp(argv[1],"-H")==0))
{
printf("Usage:Executable_Name,File_Name\n");
return 0;
}
fd=open(argv[1],O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
}
else
{
printf("File get's succefully open with FD%d\n",fd);
}




close(fd);
return 0;
}
