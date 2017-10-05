#include<stdio.h>
#include<conio.h>
void fun(float a)
{
float *p=&a;
}
struct bill
{
  char item[20];
  float qty,price;
}b[100];
void main()
{
 int i=0,n=1;
 float amount,tot=0;
 char op;
 clrscr();
 do
 {
  flushall();
  printf("Enter Item name: ");
  scanf("%s",&b[i].item);
  printf("Enter Qty and Price: ");
  scanf("%f %f",&b[i].qty,&b[i].price);
  flushall();
  printf("Do you want to enter another item[Y/N]: ");
  gets(&op);
  if(op=='y') {i++;n++;}
 }
 while(op=='y');
 flushall();
printf("\n\n\n\t\t\tBig Bazaar");
printf("\n\t----------------------------------------------------------\n");
printf("\t\tItem\tQty\tPrice\tAmount\n");
printf("\t----------------------------------------------------------\n");
for(i=0;i<n;i++)
 {
  amount=b[i].qty*b[i].price;
  tot=tot+amount;
  printf("\t\t%s\t%.2f\t%.2f\t%.2f\n",b[i].item,b[i].qty,b[i].price,amount);
 }
printf("\t----------------------------------------------------------\n");
printf("\t\t\tTotal amount=%.2f\n",tot);
printf("\t\t**********Thank you**********\n");
printf("\t\t**********Visit Again**********");
getch();
}