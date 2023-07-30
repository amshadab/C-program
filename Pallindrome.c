#include<stdio.h>
#include<conio.h>
void main()
{
    int a,rev,rem;
    printf("Enter number:");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(rev==a)
    {
        printf("It is a pallindrome number");
    }
    else{
        printf("It is not pallindrome number");
    }
    getch();
}