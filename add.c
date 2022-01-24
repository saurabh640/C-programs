// write a program to print integer number entered by the user



#include<stdio.h>
   
int main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c = a + b;
    printf("The sum of two number is%d",c);
    return 0;
}