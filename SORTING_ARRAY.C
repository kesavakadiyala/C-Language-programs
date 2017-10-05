#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,temp,a[100];
clrscr();
printf("enter how many no of elements: ");
scanf("%d",&n);
a[n];
printf("Enter elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
       {
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
       }
    }
   }
printf("Elements after sorting are: ");
for(i=0;i<n;i++)
printf("%4d",a[i]);
getch();
}