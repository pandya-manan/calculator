#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter the number whose factorial needs to be calculated \n");
    int num;
    scanf("%d",&num);
    int prod=1;
    if(num==0 || num==1)
    {
        printf("The factorial is 1");
    }
    else
    {
        int i;
        for(i=1;i<=num;i++)
        {
            prod=prod*i;
        }
        printf("The factorial is %d",prod);
    }
}