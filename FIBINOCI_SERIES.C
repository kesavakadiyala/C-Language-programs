#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,m,a=0,b=1,sum=0;
clrscr();
printf("Enter ending value: ");
scanf("%d",&m);
printf("%d\t",a);
for(i=1;i<=m;i++)
{
 while(sum<=m)
  {
   sum=a+b;
   a=b;
   b=sum;
   printf("%d\t",a);
  }
}
getch();
}
