#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],n,m,i,j;
clrscr();
printf("Enter no of rows and columns: ");
scanf("%d%d",&n,&m);
printf("Enter elements: ");
for(i=0;i<n;i++)
{
 for(j=0;j<m;j++)
 {
  scanf("%d",&a[i][j]);
  }
}
printf("Matrix is:\n");
for(i=0;i<n;i++)
{
 for(j=0;j<m;j++)
 {
  printf("%d\t",a[i][j]);
  }
  printf("\n");
}
printf("Top and Bottom Mirror matrix is:\n");
for(i=n-1;i>=0;i--)
{
 for(j=0;j<m;j++)
  {
   printf("%d\t",a[i][j]);
  }
 printf("\n");
}
printf("Left and Right Mirror matrix is:\n");
for(i=0;i<n;i++)
{
 for(j=m-1;j>=0;j--)
  {
   printf("%d\t",a[i][j]);
  }
 printf("\n");
}
getch();
}
