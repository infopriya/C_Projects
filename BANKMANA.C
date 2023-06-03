#include<stdio.h>
#include<conio.h>
int list();
void deposit();
void last();
void withdrawl();
void transfer();
void checkdetails();
int totalamount=1000,amount,amo,tr,totaldeposit=0,totalwithdrawl=0,totaltr=0;
int acc;
char a[50];
void main()
{
   printf("enter your name:");
   gets(a);
   printf("enter your account:");
   scanf("%d",&acc);
   while(1)
   {
     clrscr();
     switch(list())
     {
       case 1:
	  deposit();
	  totaldeposit+=amount;
	  break;
       case 2:
	  withdrawl();
	  if(amo<=totalamount)
	    totalwithdrawl+=amo;
	  break;
       case 3:
	  transfer();
	   if(tr<=totalamount)
	   totaltr+=tr;
	  break;
       case 4:
	  checkdetails();
	  break;
       case 5:
	    clrscr();
	    last();
	    getch();
	    exit(0);
	    default:
	     printf("invalid choice");
     }
     getch();

   }
}
int list()
{
   int ch;
   printf("\n1.deposit amount");
   printf("\n2.withdrawl amaount");
   printf("\n3.transfer amount");
    printf("\n4.check details");
   printf("\n5.exit");
   printf("\n6. enter your choice:");
   scanf("%d",&ch);
   return (ch);

}
void deposit()
{
   printf("enter the amount you want to be deposit:");
   scanf("%d", &amount);
   totalamount+=amount;
}
void withdrawl()
{
  printf("enter the amount you want to withdrawl:");
  scanf("%d",&amo);
  if(amo<=totalamount)
    totalamount-=amo;
  else
  printf("less amount");
}
void transfer()
{
  printf("enter the amount which you want to transfer:");
  scanf("%d",&tr);
  if(tr<=totalamount)
     totalamount-=tr;
     //printf("Ammount transferred.");
  else
     printf("less amount transaction is not possibl");
}
void checkdetails()
{
 printf("\ntotal amount=%d",totalamount);
 printf("\ntotal deposit amount=%d",totaldeposit);
 printf("\ntotalwithdrawl amount=%d",totalwithdrawl);
 printf("\ntotal transfer amount=%d",totaltr);
}
void last()
{
 printf("\n********************************\n");
 printf("\nyour name=%s\n",a);
 printf("\nyour account number=%d",acc);
  printf("\ntotal amount=%d\n",totalamount);
 printf("\ntotal deposit amount=%d\n",totaldeposit);
 printf("\ntotalwithdrawl amount=%d\n",totalwithdrawl);
 printf("\ntotal transfer amount=%d\n",totaltr);
 printf("************THANKS**********");
}