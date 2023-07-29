#include<stdio.h>
#include<conio.h>
void main()
{
    int a,fact=1;
    printf("Enter number:");
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",a,fact);
    getch();
}