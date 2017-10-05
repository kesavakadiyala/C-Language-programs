/*If n=3; o/p=    12321
		  12 21
		  1   1
		  12 21
		  12321 */

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k,x;
clrscr();
printf("Enter n value: ");
scanf("%d",&n);
k=1;x=0;
for(i=1;i<=(2*n-1);i++)
{
  for(j=1;j<=(2*n-1);j++)
   {
     if((j<=n-x)||(j>=n+x))
      {
	if(j<n)
	printf("%d",k++);
	else if((i==1)||(i==2*n-1))
	{
	 if(j<n) printf("%d",k++);
	 else printf("%d",k--);
	 }
	else printf("%d",--k);

      }
     else printf(" ");
   }
   printf("\n");
   if(i<n) x++;
   else x--;
   k=1;
}
getch();
}