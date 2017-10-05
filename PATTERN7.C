#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k=1,l;
clrscr();
printf("Enter n value: ");
scanf("%d",&n);
l=3*n;
for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   {
    if(i==1)
    printf("%d",k++);
    else if(i<n)
     {
      if((j>1)&&(j<n))
      printf(" ");
      else if(j==1)
      printf("%d",l--);
      else printf("%d",k++);
     }
    else
     printf("%d",l--);
   }
  printf("\n");
 }
getch();
}
