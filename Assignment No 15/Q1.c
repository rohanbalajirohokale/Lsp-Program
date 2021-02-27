/*
1. Accept number of rows and number of columns from user and display  below pattern.  
Input : iRow = 4 iCol = 3  
Output : 
 * * *  
 * * *  
 * * *  
 * * * 

*/
#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0;
    int j=1;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            printf("*\t");
          
        }
     printf("\n");
    }
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    printf("Enter the first number");
    scanf("%d",&ivalue1);
    printf("Enter the second number");
    scanf("%d",&ivalue2);
    pattern(ivalue1,ivalue2);
    return 0;

}