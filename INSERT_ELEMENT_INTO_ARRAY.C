#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,pos,newele;
clrscr();
printf("Enter no. of elements to enters: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++) scanf("%d",&a[i]);
printf("Enter position and element to insert: ");
scanf("%d%d",&pos,&newele);
if((pos<1)||(pos>n))
printf("Position is not in range");
else
{
 for(i=n;i>=pos+1;i--)
 {
 a[i]=a[i-1];
 }
 a[i]=newele;
 printf("Elements are:");
 for(i=0;i<=n;i++)
 printf("%4d",a[i]);
}
getch();
}