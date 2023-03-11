#include<stdio.h>
#include<conio.h>

int main()
{
  printf("Welcome to Online Calculator\n");
  printf("Please select from the following choices\n");
  printf("1.Add\n");
  printf("2.Subtract\n");
  printf("3.Multiplication\n");
  printf("4.Division\n");
  int choice;
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:printf("Enter the number one\n");
          int a;
          scanf("%d",&a);
          printf("Enter the number two\n");
          int b;
          scanf("%d",&b);
          printf("%d",b+a);
          break;
    case 2:printf("Enter the number one\n");
          int a1;
          scanf("%d",&a1);
          printf("Enter the number two\n");
          int b1;
          scanf("%d",&b1);
          printf("%d",a1-b1);
          break;
    case 3:printf("Enter the number one\n");
          int a3;
          scanf("%d",&a3);
          printf("Enter the number two\n");
          int b3;
          scanf("%d",&b3);
          printf("%d",a3*b3);
          break;
    case 4:printf("Enter the number one\n");
          int a4;
          scanf("%d",&a4);
          printf("Enter the number two\n");
          int b4;
          scanf("%d",&b4);
          printf("%d",a4/b4);
          break;
    default:printf("Enter the correct choice");

  } 
  
    
}