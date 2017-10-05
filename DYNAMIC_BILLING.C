#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void fun(float a)
{
float *c=&a;
}
struct bill
{
  char item[20];
  float qty,price;
}*p,b;
void main()
{
 int i=0,n=1;
 float amount,tot=0;
 char op;
 clrscr();
 p=(struct bill *)calloc(n,sizeof(b));
 do
 {
  flushall();
  printf("Enter Item name: ");
  scanf("%s",&(p+i)->item);
  printf("Enter Qty and Price: ");
  scanf("%f %f",&(p+i)->qty,&(p+i)->price);
  flushall();
  printf("Do you want to enter another item[Y/N]: ");
  gets(&op);
  if(op=='y') {i++;n++;p=(struct bill *)realloc(p,n*sizeof(b));}
 }
 while(op=='y');
 flushall();
printf("\n\n\n\t\t\t\tBig Bazaar");
printf("\n\t-------------------------------------------------------------------\n");
printf("\t\tItem\t\tQty\t\tPrice\t\tAmount\n");
printf("\t-------------------------------------------------------------------\n");
flushall();
for(i=0;i<n;i++)
 {
  amount=((p+i)->qty)*((p+i)->price);
  tot=tot+amount;
  printf("\t\t%s\t\t%5.2f\t\t%5.2f\t\t%6.2f\n",(p+i)->item,(p+i)->qty,(p+i)->price,amount);
 }
printf("\t-------------------------------------------------------------------\n");
printf("\t\t\tTotal amount=%.2f\n",tot);
printf("\t\t**********Thank you**********\n");
printf("\t\t**********Visit Again**********");
getch();
}