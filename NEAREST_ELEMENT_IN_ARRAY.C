#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],n,m,k,i,j,count=0;
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
  printf("Enter element to find nearest elements: ");
  scanf("%d",&k);
  for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
     {
       if(k==a[i][j])
	{
	 if(i>0&&j<n)
	 printf("%d",a[i-1][j]);
	 if(j>0&&i<n)
	 printf("%d",a[i][j-1]);
	 if(i>=0&&j<n-1)
	 printf("%d",a[i][j+1]);
	 if(j>=0&&i<n-1)
	 printf("%d",a[i+1][j]);
	 count=1;
	}
     }
   }
  if(count==0)
  printf("Element is not present");
  getch();
 }