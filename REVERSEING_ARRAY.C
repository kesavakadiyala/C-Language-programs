#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,temp;
clrscr();
printf("Enter no. of elements to enters: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<n/2;i++)
 {
  temp=a[i];
  a[i]=a[(n-1)+i];
  a[(n-1)+i]=temp;
 }
printf("Elements are: ");
for(i=0;i<n;i++)
printf("%d",&a[i]);
getch();
}