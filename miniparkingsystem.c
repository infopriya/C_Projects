#include <stdio.h>
#include <conio.h>
int menu();
void cyle();
void bus();
void ricksha();
void showdetails();
void delete();
int NOB=0,NOR=0,NOC=0,amount=0,count=0;
void main()
{
    while(1)
    {
        //        clrscr();
        switch(menu())
        {
            case 1:
                bus();
                break;
            case 2:
                cycle();
                break;
            case 3:
                ricksha();
                break;
            case 4:
                showdetails();
                break;
            case 5:
                delete();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("invalid choice");
                
        }
        getch();
        
    }
}

int menu()
{
    int ch;
    printf("\n1.enter  bus\n");
    printf("\n2.enter cycle\n");
    printf("\n3.enter ricksha\n");
    printf("\n4.show status\n");
    printf("\n5.delete data\n");
    printf("\n6.exit\n");
    printf("\nenter your choice:-\n");
    scanf("%d",&ch);
    return (ch);
    
}
void delete()
{
    NOB=0;
    NOC=0;
    NOR=0;
    amount=0;
    count=0;
}
void showdetails()
{
    printf("\nenter no. of bus=%d\n",NOB);
    printf("\nenter no. of cycle=%d\n",NOC);
    printf("\nenter no. of ricksha=%d\n",NOR);
    printf("\nTotal number of vehciles=%d\n",count);
    printf("\ntotal gain amount=%d\n",amount);
    
    
}
void bus()
{
    //printf("\nHow many bus you want to park : \n");
    
    printf("\nENTRY SUCCESSFUL!\n");
    NOB++;
    amount=amount + 100;
    count++;
    
}

void ricksha()
{
    printf("\nENTRY SUCCESSFUL!\n");
    NOR++;
    amount=amount + 50;
    count++;
    
}

void cycle()
{
    printf("\nENTRY SUCCESSFUL\n");
    NOC++;
    amount=amount + 20;
    count++;
    
}