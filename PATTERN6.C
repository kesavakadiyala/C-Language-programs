/* If n=3;o/p=    1
		  ab
		  123
		  ab
		  1           */
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k;
clrscr();
printf("Enter n value: ");
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
 {
  for(j=1,k=97;j<=n;j++,k++)
   {
    if(i<=n)
     {
      if(j<=i)
       {
	if(i%2==0)
	printf("%c",(char)k);
	else printf("%d",j);
	}
     }
    else
     {
      if(j<=2*n-i)
       {
	if(i%2==0)
	printf("%c",(char)k);
	else printf("%d",j);
	}
     }
    }
   printf("\n");
  }
 getch();
}