/* If n=3;o/p=       *
		    **
		   ***
		    **
		     *                      */
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
  for(j=1;j<=n;j++)
   {
    if(i<=n)
     {
      if(j<=n-i)
      printf(" ");
      else printf("*");
     }
    else
     {
      if(j<=i-n)
      printf(" ");
      else printf("*");
     }
    }
   printf("\n");
  }
 getch();
}
