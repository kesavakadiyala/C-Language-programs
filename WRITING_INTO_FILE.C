#include<stdio.h>
#include<conio.h>
struct stu
{
 int id;
 char name[20];
}s;
void main()
{
FILE *fp;
char op;
clrscr();
fp=fopen("kesava","a");
if(fp==NULL)
printf("File does not exist");
else
 {
  do
  {
   printf("Enter ID and Name: ");
   scanf("%d%s",&s.id,s.name);
   fwrite(&s,sizeof(s),1,fp);
   flushall();
   puts("One row created");
   printf("Do you want to enter another record[Y/N]: ");
   gets(&op);
   }while(op=='y');
  fclose(fp);
 }
}






