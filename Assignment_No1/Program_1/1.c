/*Question:
          //  Write a program which is used to add two number.*/


#include<stdio.h>
int add(int ino1,int ino2)
{
int i=0;
i=ino1+ino2;
return i;
}
int main()
{
int ivalue1=0;
int ivalue2=0;
int iret=0;

printf("Enter the First Number\n");
scanf("%d",&ivalue1);

printf("Enter the Second Number\n");
scanf("%d",&ivalue2);

iret=add(ivalue1,ivalue2);
printf("Addtion of two number is:%d",iret);
return 0;
}
