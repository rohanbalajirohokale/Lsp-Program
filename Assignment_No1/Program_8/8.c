#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main(int argc, char*argv[])
{
int fd=0;
char arr[200];
int iret=0;

if(argc!=2)
{
printf("Error:Invalid Number ofArgument\n");
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
return -1;
}
else
{
printf("File get succesfully open \n");
}
iret=read(fd,arr,200);
if(iret==-1)
{
printf("Unable to read the data\n");
close(fd);
return -1;
}
printf("File Data is %s\n",arr);
close(fd);
return 0;
}
