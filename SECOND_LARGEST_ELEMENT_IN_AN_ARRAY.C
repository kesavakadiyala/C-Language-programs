#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,temp;
clrscr();
printf("Enter number of elements: ");
scanf("%d",&n);
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
 printf("Ascending arder is:");
 for(i=0;i<n;i++)
 printf("%4d",a[i]);
i=0;
while(a[i]==a[i+1])
 {
  i++;
 }
printf("\nSecond smallest element is: %d \n",a[i+1]);
i=n-1;
while(a[i]==a[i-1])
 {
  i--;
 }
printf("Second largest element is: %d",a[i-1]);
getch();
}
/* i=0;
 x: if(a[i]!=a[i+1])
     printf("Second smallest element is: %d \n",a[i+1]);
   else
   {
   i++;
   goto x;
   }
i=n-1;
y: if(a[i]!=a[i-1])
     printf("Second largest element is: %d",a[i-1]);
   else
   {
   i++;
   goto y;
   }
getch();
} */

