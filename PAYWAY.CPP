// HEADER FILES USED
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<string.h>

// BASE CLASS(i.e. Declaration of main class)
class base
{
private:          // DATA MEMBERS ARE DECLARED HERE
	  char amt[10],mob_no[10],oper[10],state[20];
	  char cc_no[20],cust_id[20],board_nm[20];
public:          // MEMBER FUNCTIONS ARE DECLARED HERE
	  void mobile();
	  void electricity();
	  void dth();
	  void cable_tv();
	  void broadband();
	  void credit_card();
	  void payment();
}obj;

void base::mobile()
{
    clrscr();
    int choice;
    cout<<"Select:- \n\n\n\t  1. PREPAID \n\t  2. POSTPAID ";
    cout<<"\n\n\n\t\t\t Enter your choice :- ";
    cin>>choice;
    cout<<endl;
    cout<<"\n\t\tPLEASE WAIT.........";
    delay(500);
    clrscr();
    switch(choice)
    {
    case 1:
	cout<<"\n\n\tEnter your PREPAID mobile number :- ";
	gets(mob_no);
	cout<<"\n\tEnter your operator :- ";
	gets(oper);
	cout<<"\n\tEnter your state :- ";
	gets(state);
	cout<<"\n\tEnter your Recharge amount :- ";
	gets(amt);
	payment();
	break;
    case 2:
	cout<<"\n\n\tEnter your POSTPAID mobile number :- ";
	gets(mob_no);
	cout<<"\n\tEnter your operator :- ";
	gets(oper);
	cout<<"\n\tEnter your State :- ";
	gets(state);
	cout<<"\n\tEnter your Bill Amount :- ";
	gets(amt);
	payment();
	break;

    default:
	cout<<"\n\n\t\tERROR in input";
	break;
    }
}

void base::electricity()
{
    cout<<"\n\n\n\n\tEnter your state :- ";
    gets(state);
    cout<<"\n\tEnter the name of your electricity board :- ";
    gets(board_nm);
    cout<<"\n\tEnter customer number :- ";
    gets(cust_id);
    cout<<"\n\tEnter bill amount :- ";
    gets(amt);
    payment();
}

void base::dth()
{
    cout<<"\n\n\n\n\tEnter your operator ";
    gets(oper);
    cout<<"\n\tEnter the customer ID :- ";
    gets(cust_id);
    cout<<"\n\tEnter amount :- ";
    gets(amt);
    payment();
}

void base::cable_tv()
{
    cout<<"\n\n\n\n\tEnter your operator :- ";
    gets(oper);
    cout<<"\n\tEnter the customer ID :- ";
    gets(cust_id);
    cout<<"\n\tEnter amount :- ";
    gets(amt);
    payment();
}

void base::broadband()
{
    cout<<"\n\n\n\n\tEnter your operator :- ";
    gets(oper);
    cout<<"\n\tEnter the customer ID :- ";
    gets(cust_id);
    cout<<"\n\tEnter amount :- ";
    gets(amt);
    payment();
}


void base::credit_card()
{
    cout<<"\n\n\n\n\tEnter your Credit Card Number :- ";
    gets(cc_no);
    cout<<"\n\tEnter Bill Amount :- ";
    gets(amt);
    payment();
}

void base::payment()
{
    int a,choice,i,n,l,x,y;
    char card_no[20],card_ed[20],st[50];
    char upi_id[20],paytm_no[20],userid[20];
    cout<<"\n\t\tPLEASE WAIT.........";
    delay(2500);
    clrscr();
    cout<<"\n\n\t\t\tWelcome to Payment Gateway \n";
    cout<<"\n\t Your Payment Amount is Rs. ";
    puts(amt);
    cout<<"\n\n\t Select any one payment option :- \n";
    cout<<"\n  1. Debit Card \n  2. UPI \n  3. PAYTM \n  4. Netbanking \n";
    cout<<"\n\n\t\t Enter your choice :- ";
    cin>>n;
    cout<<endl;
    cout<<"\n\t\tPLEASE WAIT.........";
    delay(500);
    switch(n)
    {
    case 1:
	clrscr();
	cout<<"\n\tEnter DEBIT CARD Number :- ";
	gets(card_no);
	cout<<"\n\tEnter EXPIRY DATE :- ";
	gets(card_ed);
	cout<<"\n\tEnter CVV :- ";
   x=wherex();
   y=wherey();
   gets(st);
   l=strlen(st);
   gotoxy(x,y);
   for(i=0;i<=l-1;i++)
     cout<<"*";

	cout<<"\n\n\t\tEnter OTP :- ";
	x=wherex();
   y=wherey();
   gets(st);
   l=strlen(st);
   gotoxy(x,y);
   for(i=0;i<=l-1;i++)
   cout<<"*";
	cout<<"\n\n\t\tPLEASE WAIT.........";
    delay(250);
	cout<<"\n\n\n\t\tYour Payment is successful.\n";
	delay(100);
	cout<<"\n\t\t Transaction ID is 472698361 \n\n\t";
	delay(100);
	cout<<"Receipt of your successful payment is sent on your E-MAIL \n";
	break;

    case 2:
	clrscr();
	cout<<"\n\n\n\tEnter your UPI ID :- ";
	gets(upi_id);
	cout<<"\n\tEnter OTP :- ";
	   x=wherex();
   y=wherey();
   gets(st);
   l=strlen(st);
   gotoxy(x,y);
   for(i=0;i<=l-1;i++)
   cout<<"*";
	cout<<"\n\n\t\tPLEASE WAIT.........";
    delay(250);
	cout<<"\n\n\n\t\tYour Payment is successful.\n";
	delay(100);
	cout<<"\n\t\t Transaction id is 472698361 \n\n\t";
	delay(100);
	cout<<"Receipt of your successful payment is sent on your E-MAIL \n";
	break;

    case 3:
	clrscr();
	cout<<"\n\n\n\tEnter your PAYTM Number :- ";
	gets(paytm_no);
	cout<<"\n\tEnter your Password :- ";
	   x=wherex();
   y=wherey();
   gets(st);
   l=strlen(st);
   gotoxy(x,y);
   for(i=0;i<=l-1;i++)
   cout<<"*";
	cout<<"\n\n\t\tEnter OTP :- ";
	   x=wherex();
   y=wherey();
   gets(st);
   l=strlen(st);
   gotoxy(x,y);
   for(i=0;i<=l-1;i++)
   cout<<"*";
	cout<<"\n\n\t\tPLEASE WAIT.........";
    delay(250);
	cout<<"\n\n\n\t\tYour Payment is successful.\n";
	delay(100);
	cout<<"\n\t\t Transaction id is 472698361 \n\n\t";
	delay(100);
	cout<<"Receipt of your successful payment is sent on your E-MAIL \n";
	break;

    case 4:
	clrscr();
	cout<<"\n\n\n\tEnter user ID :- ";
	gets(userid);
	cout<<"\n\tEnter Password :- ";
	   x=wherex();
   y=wherey();
   gets(st);
   l=strlen(st);
   gotoxy(x,y);
   for(i=0;i<=l-1;i++)
   cout<<"*";
	cout<<"\n\n\t\tEnter OTP :- ";
	   x=wherex();
   y=wherey();
   gets(st);
   l=strlen(st);
   gotoxy(x,y);
   for(i=0;i<=l-1;i++)
   cout<<"*";
	cout<<"\n\n\t\tPLEASE WAIT.........";
    delay(250);
	cout<<"\n\n\n\t\tYour Payment is successful.\n";
	delay(100);
	cout<<"\n\t\t Transaction id is 472698361 \n\n\t";
	delay(100);
	cout<<"Receipt of your successful payment is sent on your E-MAIL \n";
	break;

    default:
	cout<<"\n\t\t\tError in input";
	break;
    }
}

int main(void)
{
    int n,nn,j;
    char name[20],email[50];
    clrscr();
    cout<<"\n\n\n\t\t\t----WELCOME TO PayWay---- \n";
    cout<<"\n\n\n\tEnter Your Name :- ";
    gets(name);
    cout<<"\n\tEnter your E-MAIL (for receipt) :- ";
    gets(email);
    cout<<"\n\n\t\tPLEASE WAIT.........";
    delay(1000);
    clrscr();
    label:
    clrscr();
    cout<<"\n\n\t\t\t\tWELCOME ";
    puts(name);
    cout<<"\n\n\t\tWhat type of payment you want to do :- \n";
    cout<<"\n  1. Mobile Recharge \n  2. Electricity\n  3. DTH ";
    cout<<"\n  4. Cable TV \n  5. Broadband \n  6. Credit Card Bill\n";
    cout<<"\n\n\n\t\tEnter Your Choice :- ";
    cin>>n;
    cout<<endl;
    cout<<"\n\n\t\tPLEASE WAIT.........";
    delay(1000);
    clrscr();
    switch(n)
    {
    case 1:
	obj.mobile();
	break;
    case 2:
	obj.electricity();
	break;
    case 3:
	obj.dth();
	break;
    case 4:
	obj.cable_tv();
	break;
    case 5:
	obj.broadband();
	break;
    case 6:
	obj.credit_card();
	break;
    default:
	cout<<"\n\n\n\n\t\t\t\tERROR in input\n\n";
	cout<<" Would you like to retry then ENTER 1";
	cout<<" \n ELSE press ENTER 0 to exit ";
	cin>>nn;;
	cout<<endl;
	cout<<"\n\t\tPLEASE WAIT.........";
    delay(250);
	if(nn==1)
	   goto label;
	else
	   exit(0);
	break;
    }
    cout<<"\n\n\t\t Would you like to make another payment \n";
    cout<<"\nIF YES THEN ENTER 1\nELSE ENTER 0 to exit ";
    cin>>nn;
    cout<<endl;
    cout<<"\n\t\tPLEASE WAIT.........\n\n";
    delay(250);
	if(nn==1)
	   goto label;
	else
	   exit(0);
}


