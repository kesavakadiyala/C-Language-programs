/* If n=3; o/p=    1
		  121
		 12321
		  121
		   1         */
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k=1;
clrscr();
printf("Enter n value: ");
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
 {
  for(j=1;j<=2*n-1;j++)
  {
   if(i<=n)
   {
      if((j<=n-i)||(j>=n+i))
      printf(" ");
      else
       {
	if(j<n)
	 printf("%d",k++);
	else
	printf("%d",k--);
      }
    }

 else
 {
    if((j<=i-n)||(j>=3*n-i))
      printf(" ");
      else
       {
	if(j<n)
	 printf("%d",k++);
	else
	printf("%d",k--);
       }
     }}
     printf("\n");
     k=1;
   }
 getch();
}