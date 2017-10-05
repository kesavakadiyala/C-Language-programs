#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],b[100][100],mul[100][100],row1,col1,row2,col2,i,j,k,sum=0;
 clrscr();
 printf("Enter no of rows and columns of 1st matrix: ");
 scanf("%d%d",&row1,&col1);
 printf("Enter no of rows and columns of 2nd matrix: ");
 scanf("%d%d",&row2,&col2);
 if(row2!=col1)
 printf("Enter correct dimensions");
 else
 {
 printf("Enter elements of 1st matrix: ");
 for(i=0;i<row1;i++)
  {
   for(j=0;j<col1;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
 printf("Enter elements of 2nd matrix: ");
 for(i=0;i<row2;i++)
  {
   for(j=0;j<col2;j++)
    {
     scanf("%d",&b[i][j]);
    }
  }
 printf("1st matrix is:\n ");
  for(i=0;i<row1;i++)
   {
    for(j=0;j<col1;j++)
     {
      printf("%d\t",a[i][j]);
     }
    printf("\n");
  }
 printf("2st matrix is:\n ");
  for(i=0;i<row2;i++)
   {
    for(j=0;j<col2;j++)
     {
      printf("%d\t",b[i][j]);
     }
    printf("\n");
  }
 for(i=0;i<row1;i++)
  {
   for(j=0;j<col2;j++)
    {
     for(k=0;k<col1;k++)
      {
       sum=sum+a[i][k]*b[k][j];
       mul[i][j]=sum;
      }
    }
  }
 printf("Matrix after multiplication is:\n ");
 for(i=0;i<row1;i++)
  {
   for(j=0;j<col2;j++)
    {
     printf("%d\t",mul[i][j]);
    }
   printf("\n");
  }
 }
 getch();
}
