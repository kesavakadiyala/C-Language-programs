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
clrscr();
fp=fopen("kesava","r");
if(fp==NULL)
printf("File does not exist");
else
 {
   puts("ID\tName");
   puts("------------------------------");
   fread(&s,sizeof(s),1,fp);
   while(!feof(fp))
    {
     printf("%d\t%s\n",s.id,s.name);
     fread(&s,sizeof(s),1,fp);
    }
  fclose(fp);
 }
 getch();
}