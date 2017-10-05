#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],n,m,i,j;
 clrscr();
 printf("Enter no of rows and columns: ");
 scanf("%d%d",&n,&m);
 printf("Enter elements of matrix: ");
 for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
 printf("Matrix is:\n ");
  for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
     {
      printf("%d\t",a[i][j]);
     }
    printf("\n");
  }
  printf("Transpose matrix is:\n ");
  for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
     {
      printf("%d\t",a[j][i]);
     }
    printf("\n");
  }
  getch();
}

