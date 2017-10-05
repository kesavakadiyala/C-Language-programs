/*	If n=3; o/p=   *
		      ***
		     *****  		*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("Enter n value: ");
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
 {
   for(j=1;j<=2*n-1;j++)
     {
       if(i<=n)
	{
	 if(j<=n-i||j>=n+i)
	 printf(" ");
	 else printf("*");
	}
       else
	{
	 if(j<n-i&&j>=(2*n-i)+2)
	 printf("*");
	 else printf(" ");
	}
     }
   printf("\n");
 }
getch();
}

