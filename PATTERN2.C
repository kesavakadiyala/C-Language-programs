/* if n=5; o/p=      1
		    234
		   56789
		  8765432
		 123456789 */

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k=1;
clrscr();
printf("Enter n value: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   for(j=1;j<=2*n-1;j++)
    {
      if((j<=n-i)||(j>=n+i))
      printf(" ");
      else
       {
	if(k>9)
	 {
	  k=k-2;
	   while(j<n+i)
	   {
	    printf("%d",k--);
	    j++;
	   }
	 }
	else printf("%d",k++);
      }}
    printf("\n");
 }
getch();
}
