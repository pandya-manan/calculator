#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter the number\n");
    int num;
    scanf("%d",&num);
    int sum=0;
    int n=num;
    
    while(num>0)
    {
        int rem=num%10;
        sum=(sum*10)+rem;
        num/=10;
    }
    if(sum==n)
    {
        printf("%d is a palindrome number",n);
    }
    else
    {
        printf("%d is not a palindrome number",n);
    }
}