#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>

class paytm
{
public:
int z;
 int n1,n2,pass1;
  long double mob,bal1;
void design();
void mobile(int,long double &);
void recharge(int,long double &);
void movie(int,long double &);
void add(int,long double &);
};

// member function design()
void paytm:: design()
{
int gd=DETECT,gm;

	   initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	   setbkcolor(BLUE);

cout<<"\n\t\t\033[1;32m***********mini project***********\033[0m\n";
cout<<"\t\t\033[1;32m___________________________________\033[0m\n";

}
// member function mobile()

void paytm::mobile(int pass2,long double &bal2)
{
	 cout<<"\t\t\t\033[1;33mMobile no payment\033[0m\n";
	 cout<<"\t\t\033[1;32m___________________________________\033[0m\n";
	 cout<<"\033[1;33m\nEnter mobile number\033[0m\n";
	 cin>>mob;
	 cout<<"\033[1;33mEnter amount\033[0m\n";
	 cin>>bal1;
	 cout<<"\033[1;33mEnter Password\033[0m\n";
	 cin>>pass1;
	 if(pass1==pass2)
	 {
	    if(bal1<=bal2)
	     {
	      if(bal1>0)
	      {
	       delay(2000);
	       bal2=bal2-bal1;
	       cout<<"\033[1;33mPayment successfully of\033[0m "<<bal1;
	       cout<<"\033[1;33m on Mobile number is \033[0m "<<mob;
	       }
	      else
	      {
	      cout<<"Payment cannot be negative";
	      }
	     }
	    else
	    {
	     cout<<"\nInsufficient Balance";
	     cout<<"\nTry Again";
	    }
	 }
	 else
	 {
	   cout<<"Wrong password";
	 }
 }

 // member function add()
void paytm::add(int pass2,long double &bal2)
  {
   cout<<"\033[1;33mEnter amount to add\033[0m\n";
    cin>>bal1;
    cout<<"\033[1;33mEnter Password\033[0m\n";
    cin>>pass1;
    if(pass1==pass2)
       {
	 if(bal1>0)
	   {
	      delay(2000);
	      bal2=bal2+bal1;
	      cout<<"\033[1;33mAmount add successfully of\033[0m "<<bal1;
	   }
	  else
	   {
	     cout<<"Amount cannot be negative";
	   }
       }
     else
      {
       cout<<"Wrong password";
       }
 }

 // member function recharge()
 void paytm:: recharge(int pass2,long double &bal2)
 {
   cout<<"\n\t\t\t\033[1;33mSelect your sim\n\t\t 1.Airtel\t2.Jio\t3.BSNL\033[0m\n";
   cin>>n1;
   switch(n1)
   {
   case 1: cout<<"\t\t\033[1;33mAirtel\033[0m ";
	   cout<<"\n\033[1;33mSelect your plan\n\033[0m";
	   cout<<"\n\033[1;35m1.209: 22 days validity with 1 GB daily and 100 free sms daily"
	    " \n2.199: 18 days validity with 1 GB daily and 100 free sms daily"
	    " \n3.239: 22 days validity with 1.5 GB daily and 100 free sms daily"
	    " \n4.299: 28 days validity with 1.5 GB daily and 100 free sms daily"
	    " \n5.319: 30 days validity with 1.5 GB daily and 100 free sms daily"
	    " \n6.198: 14 days validity with 2 GB daily and 100 free sms daily"
	    " \n7.349: 28 days validity with 2 GB daily and 100 free sms daily"
	    " \n8.448: 28 days validity with 2 GB daily and 100 free sms daily"
	    " \n9.629: 56 days validity with 2 GB daily and 100 free sms daily "
	    "\n10.719: 70 days validity with 2 GB daily and 100 free sms daily"
	    "\n11.399: 28 days validity with 2.5 GB daily and 100 free sms daily"
	    "\n12.2025:200 days validity with 2.5 GB daily and 100 free sms daily"
	    "\n13.3599:365 days validity with 2.5 GB daily and 100 free sms daily\033[0m\n";

	   cin>>n2;
	   switch(n2)
	    {
	    case 1: cout<<"\033[1;33mEnter pin\n\033[0m";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=209)
			{
			bal2=bal2-209;
			}
			else
			{
			cout<<"\n\033[1;33mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;33mWrong Password\033[0m";
		    }
		break;
       case 2: cout<<"\033[1;33mEnter pin\n\033[0m";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=199)
			{
			bal2=bal2-199;
			}
			else
			{
			cout<<"\n\033[1;33mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;33mWrong Password\033[0m";
		    }
		break;
	  case 3: cout<<"\033[1;33mEnter pin\n\033[0m";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=239)
			{
			bal2=bal2-239;
			}
			else
			{
			cout<<"\n\033[1;33mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;33mWrong Password\033[0m";
		    }
		break;
	case 4: cout<<"\033[1;33mEnter pin\n\033[0m";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=299)
			{
			bal2=bal2-299;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
	case 5: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=319)
			{
			bal2=bal2-319;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
	case 6: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=198)
			{
			bal2=bal2-198;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
	case 7: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=349)
			{
			bal2=bal2-349;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
      case 8: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=448)
			{
			bal2=bal2-448;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
     case 9: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=629)
			{
			bal2=bal2-629;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
     case 10: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=719)
			{
			bal2=bal2-719;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
    case 11: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=399)
			{
			bal2=bal2-399;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
   case 12: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=2025)
			{
			bal2=bal2-2025;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
   case 13: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=3599)
			{
			bal2=bal2-3599;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;

	    default : cout<<"\033[1;31mWrong choice\033[0m";
	    }
	    break;

   case 2: cout<<"\033[1;33m\t\tJio ";
	   cout<<"\n\033[1;35m1.209: 22 days validity with 1 GB daily and 100 free sms daily"
	    " \n2.199: 18 days validity with 1 GB daily and 100 free sms daily"
	    " \n3.239: 22 days validity with 1.5 GB daily and 100 free sms daily"
	    " \n4.299: 28 days validity with 1.5 GB daily and 100 free sms daily"
	    " \n5.319: 30 days validity with 1.5 GB daily and 100 free sms daily"
	    " \n6.198: 14 days validity with 2 GB daily and 100 free sms daily"
	    " \n7.349: 28 days validity with 2 GB daily and 100 free sms daily"
	    " \n8.448: 28 days validity with 2 GB daily and 100 free sms daily"
	    " \n9.629: 56 days validity with 2 GB daily and 100 free sms daily "
	    "\n10.719: 70 days validity with 2 GB daily and 100 free sms daily"
	    "\n11.399: 28 days validity with 2.5 GB daily and 100 free sms daily"
	    "\n12.2025:200 days validity with 2.5 GB daily and 100 free sms daily"
	    "\n13.3599:365 days validity with 2.5 GB daily and 100 free sms daily\n\033[0m ";
	 cin>>n2;
	   switch(n2)
	    {
	    case 1: cout<<"\033[1;31mEnter pin\033[0m\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=209)
			{
			bal2=bal2-209;
			}
			else
			{
			cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m";
			}
		      }
		    else
		    {
		    cout<<"\n\033[1;31mWrong Password\033[0m";
		    }
		break;
       case 2: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=199)
			{
			bal2=bal2-199;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
	  case 3: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=239)
			{
			bal2=bal2-239;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
	case 4: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=299)
			{
			bal2=bal2-299;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
	case 5: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=319)
			{
			bal2=bal2-319;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
	case 6: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=198)
			{
			bal2=bal2-198;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
	case 7: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=349)
			{
			bal2=bal2-349;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
      case 8: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=448)
			{
			bal2=bal2-448;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
     case 9: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=629)
			{
			bal2=bal2-629;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
     case 10: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=719)
			{
			bal2=bal2-719;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
    case 11: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=399)
			{
			bal2=bal2-399;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
   case 12: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=2025)
			{
			bal2=bal2-2025;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;
   case 13: cout<<"Enter pin\n";
		    cin>>pass1;
		    if(pass1==pass2)
		     {
			if(bal2>=3599)
			{
			bal2=bal2-3599;
			}
			else
			{
			cout<<"\nINSUFFICIENT BALANCE";
			}
		      }
		    else
		    {
		    cout<<"\nWrong Password";
		    }
		break;

	    default : cout<<"Wrong choice";
	    }
	    break;

   case 3: cout<<"\033[1;33m\t\tBSNL\033[0m";
	  cout<<"\n\033[1;35m1.118: 20 days validity with 10 GB data"
		" \n2.153: 26 days validity with 26 GB data and 100 free sms day"
		" \n3.199: 30 days validity with 2 GB day and 100 free sms day"
		" \n4.347: 54 days validity with 2 GB day and 100 free sms day"
		" \n5.599: 84 days validity with 3 GB day + 3GB data and 100 free sms day"
		" \n6.997: 160 days validity with 2 GB day and 100 free sms day"
		" \n7.1999: 365 days validity with 600 GB data and 100 free sms day"
		" \n8.2399: 395 days validity with 2 GB daily and 100 free sms day\033[0m\n";

	break;
   default: cout<<"Wrong choice";
   }
  }
 // member function movie
 void paytm :: movie(int pass2,long double &bal2)
 {
   // cout<<"\n\033[1;33m\t\t\tMOVIE\033[0m";
    int choice,pin;
    cout<<"\n\033[1;33m1.KGF1\t2.KGF2\t3.12th Fail\t4.RRR\t5.Pushpa2\n\033[0m";
    cin>>choice;
    switch(choice)
    {
    case 1:cout<<"\t\tKGF\033[0m";
	   cout<<"\n\033[1;33mEnter pin for payment of 250\033[0m\n";
	   cin>>pin;
	   if(pin==pass2)
	   {
	     if(bal2>=250)
	     {
	       bal2=bal2-250;
	      cout<<"\033[1;33mMovie ticket confirm from 3 PM to 6 PM\033[0m\n";
	      {
	      cout<<"\033[1;33mYour seat number is\033[0m "<<rand()%100;

	      }
	     }
	     else
	     {
	     cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m\n";
	     }
	   }
	   else
	   {
	   cout<<"\n\033[1;31mWrong pin\033[0m";
	   }
	 break;
    case 2:cout<<"\t\t\033[1;33mKGF2\033[0m";
	   cout<<"\n\033[1;33mEnter pin for payment of 300\033[0m\n";
	   cin>>pin;
	   if(pin==pass2)
	   {
	     if(bal2>=300)
	     {
	       bal2=bal2-300;
	      cout<<"\033[1;33mMovie ticket confirm from 9 AM to 12:30 PM\033[0m\n";
	      {
	      cout<<"\033[1;33mYour seat number is\033[0m "<<rand()%100;

	      }
	     }
	     else
	     {
	     cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m\n";
	     }
	   }
	   else
	   {
	   cout<<"\n\033[1;31mWrong pin\033[0m";
	   }
	 break;
   case 3:cout<<"\t\t\033[1;33m12Fail\033[0m";
	   cout<<"\n\033[1;33mEnter pin for payment of 275\033[0m\n";
	   cin>>pin;
	   if(pin==pass2)
	   {
	     if(bal2>=275)
	     {
	       bal2=bal2-275;
	      cout<<"\033[1;33mMovie ticket confirm from 7 PM to 10 PM\033[0m\n";
	      {
	      cout<<"\033[1;33mYour seat number is\033[0m "<<rand()%100;

	      }
	     }
	     else
	     {
	     cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m\n";
	     }
	   }
	   else
	   {
	   cout<<"\n\033[1;31mWrong pin\033[0m";
	   }
	 break;
   case 4:cout<<"\t\t\033[1;33mRRR\033[0m";
	   cout<<"\n\033[1;33mEnter pin for payment of 225\033[0m\n";
	   cin>>pin;
	   if(pin==pass2)
	   {
	     if(bal2>=225)
	     {
	       bal2=bal2-225;
	      cout<<"\033[1;33mMovie ticket confirm from 6AM to 9 PM\033[0m\n";
	      {
	      cout<<"\033[1;33mYour seat number is\033[0m "<<rand()%100;

	      }
	     }
	     else
	     {
	     cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m\n";
	     }
	   }
	   else
	   {
	   cout<<"\n\033[1;31mWrong pin\033[0m";
	   }
	 break;

    case 5:cout<<"\t\t\033[1;33mPushpa2";
	   cout<<"\n\033[1;33mEnter pin for payment of 299\033[0m\n";
	   cin>>pin;
	   if(pin==pass2)
	   {
	     if(bal2>=299)
	     {
	       bal2=bal2-299;
	      cout<<"\033[1;33mMovie ticket confirm from 11 Am to 1 PM\033[0m\n";
	      {
	      cout<<"\033[1;33mYour seat number is\033[0m "<<rand()%100;

	      }
	     }
	     else
	     {
	     cout<<"\n\033[1;31mINSUFFICIENT BALANCE\033[0m\n";
	     }
	   }
	   else
	   {
	   cout<<"\n\033[1;31mWrong pin\033[0m";
	   }
	 break;

     default: cout<<"\n\033[1;31mWrong choice\033[0m";
    }

 }

void main()
{
clrscr();
int x,n,t,pass1;
int pass=1234;
long double bal=3000;
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
//setbkcolor(BLUE);

paytm ob;
do
{
 ob.design();
 cout<<"\t\t\t\033[1;35mEnter your choice\033[0m\n";
 cout<<"\t\t\033[1;32m___________________________________\033[0m\n";
  cout<<"\033[1;36m1).Mobile no payment\t2).Recharge\t3).Check Balance\t4).Movie ticket\t5.Add Money\t6).Exit\033[0m\n";
 cin>>n;
 switch(n)
 {
  case 1:system("cls");
	  ob.design();
	  ob.mobile(pass,bal);
		 break;
  case 2:clrscr();
	 ob.design();
	 cout<<"\t\t\t\033[1;33mRecharge\033[0m\n";
	 cout<<"\t\t\033[1;32m___________________________________\033[0m\n";
	 ob.recharge(pass,bal);
	 cout<<"\n\033[1;33mBalance=\033[0m"<<bal;
	 //bal=bal-t;
	 break;

  case 3: system("cls");
	 ob.design();
	 cout<<"\t\t\t\033[1;33mCheck Balance\033[0m\n";
	 cout<<"\t\t\033[1;32m___________________________________\033[0m\n";
	 cout<<"\033[1;33mEnter Pin\033[0m\n";
	 cin>>pass1;
	 if(pass1==pass)
	 {
	 cout<<"\n\033[1;33mBalance=\033[0m"<<bal;
	 }
	 else
	 {
	 cout<<"\033[1;33mWrong Password\033[0m\n";
	 }
	 break;
  case 4:system("cls");
	 ob.design();
	 cout<<"\033[1;33m\t\t\tMOVIE\033[0m\n";
	 cout<<"\t\t\033[1;32m___________________________________\033[0m\n";
	 ob.movie(pass,bal);
	 break;
  case 5:system("cls");
	 ob.design();
	 cout<<"\t\t\t\t\033[1;32mAdd Money\033[0m\n";
	 cout<<"\t\t\033[1;32m___________________________________\033[0m\n";
	 ob.add(pass,bal);
	 cout<<"\n\033[1;33mBalance=\033[0m"<<bal;
	 break;

  case 6:system("cls");
	 ob.design();
	 cout<<"\t\t\t\033[1;32mExit\033[0m\n";
	 exit(0);
	 break;
  default:clrscr();
	  ob.design();
	  cout<<"\t\t\t\033[1;31mWrong Choice\033[0m\n";
	 cout<<"\t\t\033[1;32m___________________________________\033[0m\n";

}
cout<<"\n\t\033[1;31mFor continue press 1\033[0m";
cout<<"\n\t\033[1;31mFor exit press 2\033[0m\n";
cin>>x;
}
while(x!=2);
exit(0);
closegraph();
getch();
}

/*
int gd=DETECT,gm;

initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
setbkcolor(GREEN);
closegraph();
  */

 /*209=1 gb daily,22 days
199=1.5 gb daily,18 days
239(249)=1.5 gb daily, 22 days
299=1.5 gb daily,28 days
319=1.5 gb daily 30 days
198 = 2 gb daily 14 days
349= 2 gb daily 28 days
448=28 days 2 gb daily
629=2 gb daily 56 days
719= 2 gb daily 70 days
399= 28 days 2.5 gb daily
2025=200 days 2.5 gb daily
3599=2.5 gb daily 365 days
*/
/*
cout<<"\n1.118: 20 days validity with 10 GB data"
" \n2.153: 26 days validity with 26 GB data and 100 free sms day"
" \n3.199: 30 days validity with 2 GB day and 100 free sms day"
" \n4.347: 54 days validity with 2 GB day and 100 free sms day"
" \n5.599: 84 days validity with 3 GB day + 3GB data and 100 free sms day"
" \n6.997: 160 days validity with 2 GB day and 100 free sms day"
" \n7.1999: 365 days validity with 600 GB data and 100 free sms day"
" \n8.2399: 395 days validity with 2 GB daily and 100 free sms day"
" \n9.629: 56 days validity with 2 GB daily and 100 free sms day "
"\n10.719: 70 days validity with 2 GB daily and 100 free sms day"
"\n11.399: 28 days validity with 2.5 GB daily and 100 free sms day"
"\n12.2025:200 days validity with 2.5 GB daily and 100 free sms day"
"\n13.3599:365 days validity with 2.5 GB daily and 100 free sms day "

*/
