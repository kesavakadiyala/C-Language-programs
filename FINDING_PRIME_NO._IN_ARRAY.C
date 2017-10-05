#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,c=0;
clrscr();
printf("Enter no. of elements to enters: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<n;i++)
 {
  for(j=1;j<=a[i];j++)
   {
    if(a[i]%j==0)
    c++;
   }
  if(c==2) printf("Prime no is: %d , Index is: %d \n",a[i],i);
  c=0;
 }
getch();
}
