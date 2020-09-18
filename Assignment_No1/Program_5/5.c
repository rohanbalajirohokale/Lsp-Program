#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>


int main(int argc,char *argv[])
{
int fd=0;
fd=open(argv[1],O_RDONLY);

printf("File get succesfully open with FD:%d\n",fd);

return 0;
}
