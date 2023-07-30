#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[10],b[10];
 printf("Enter String:");
 scanf("%s",a);
 strcpy(b,a);
 strrev(b);
 if(strcmp(a,b)==0)
 {
 printf("It is pallindrome string");
 }
 else{
   printf("It is not pallindrome string");
 }
 getch();
}