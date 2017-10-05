#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,pos;
clrscr();
printf("Enter no. of elements to enters: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++) scanf("%d",&a[i]);
printf("Enter position to delete element: ");
scanf("%d",&pos);
if((pos<1)||(pos>n))
printf("Position is not in range");
else
{
 for(i=pos-1;i<n;i++)
 {
 a[i]=a[i+1];
 }
 printf("Elements are:");
 for(i=0;i<n-1;i++)
 printf("%4d",a[i]);
}
getch();
}