#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>


int main(int argc,char *argv[])
{
int fd=0;
char arr[10];
int iret=0;


if(argc!=2)
{
printf("Error:Invalid Number of Argument\n");
return -1;
}
if((strcmp(argv[1],"-h")==0)||(strcmp(argv[1],"-H")==0))
{
printf("Usage:Executable_Name,File_Name");
return 0;
}
fd=open(argv[1],O_RDWR);
if(fd==-1)
{
printf("Unable to open file");
close(fd);
return -1;
}
else
{
printf("File get succesfully open");
}
iret=read(fd,arr,5);
if(iret==-1)
{
printf("Unable to read the data\n");
close(fd);
return -1;
}
printf("The File Data is\n%s",arr);
return 0;

}
