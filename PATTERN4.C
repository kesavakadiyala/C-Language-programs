/* If n=4; o/p=    *
		   **
		   ***
		   ****
		   ***
		   **
		   *               */
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
      if(j<=i)
      printf("*");
     }
    else
     {
      if(j<=2*n-i)
      printf("*");
     }
    }
   printf("\n");
  }
 getch();
}
