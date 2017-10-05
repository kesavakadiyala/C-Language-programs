#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,r,rev=0;
clrscr();
printf("Enter n value: ");
scanf("%d",&n);
m=n;
do
{
r=n%10;
rev=rev*10+r;
n=n/10;
}while(n!=0);
if(rev==m) printf("pallindrom");
else printf("not a palindrom");
getch();
}