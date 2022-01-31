 /*   NAME              ID                   GROUP
    =====              ======                 ======
1 JEMAL MOHAMEDNGUS    R\0665\08             27
2  HILUF ASHEBIR       R\0642\08             27
3 HULUMYALFAL KIFLE    R\0647\08             27
4 JIREGNA DEREJE       R\0668\08             27
5 JALENE SHIBRU        R\0662\08             27
6 JIBRIL ABDO          R\0666\08             27
7 KALKIDAN GOSSAYE     R\0683\08             28
8 KEBADU HAILU         R\0689\08             28
9 KALIKDAN MEKOONNEN   R\0684\08             28
10 KALEAB HAYMANOT     R\0676\08             28
11 KALEAB BIRHANU      R\005 \0
*/
#include <bits/stdc++.h>
using namespace std;

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

class   bank
{
private:
char name[20];
int account_no;
int balance;
public :
void create_account();
void deposit();
void withdraw();
void display();
void write();

};
void introductory();	//introductory screen function

void bank ::create_account()
{
cout<<"Enter Name :-";
cin>>name;
cout<<"\nEnter The Initial amount(>=25):-";
cin>>balance;

}
void bank :: deposit()
{

            cout<<"\n\n\tTO DEPOSITE AMOUNT";
            cout<<"Enter Deposit amount :-";
            int deposit=0;
            cin>>deposit;
            deposit=deposit+balance;
           cout<<"\nDeposit Balance = "<<deposit;
           balance=deposit;


}

void bank :: withdraw()
{
int withdraw;

				cout<<"\n\n\tTO WITHDRAW AMOUNT ";
				cout<<"\n\nEnter The amount to be withdraw";
				cin>>withdraw;
                 balance=balance-withdraw;
                cout<<"After Withdraw Balance is "<<balance;

}
//***************************************************************
//    	function to write in file
//****************************************************************

void  bank :: write()
{
    ofstream outfile("Account.txt",ios::app);
    if(!outfile.is_open())
        {
        cout<<"SORRY,FILE IS NOT CREATED!\n";
        exit(EXIT_FAILURE);
       }
    outfile<<endl;
    outfile<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
    outfile<<"====================================================\n";
	outfile<<"Name      A/c no.              Balance\n";
	outfile<<"====================================================\n";
    outfile<<name<<"\t\t"<<account_no<<"\t\t"<<balance<<endl;
}
//***************************************************************
//    	function to display from the file
//****************************************************************

void  bank :: display(){
     string f;
ifstream infile("Account.txt");
    if(infile.is_open())
        {

        while(infile.good()){
            getline(infile,f);
            cout<<f<<endl;
            }
           infile.close();
    }
}
//***************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************

void introductory()
{
    cout<<"\n\n\tWELCOME TO THE \n";
	cout<<"\n\ COMMERCIAL BANK OF ETHIOPIA";
	cout<<"\n\n\tMANAGEMENT   SYSTEM";
	cout<<"\n\nMADE BY : GROUP 27&28 G-5,G-6\n";
	cout<<"press ENTER";
	cin.get();
}
//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************

int main()
{
    introductory();
  string filename="Account.txt";
    ofstream outfile(filename.c_str(),ios::app);
    if(outfile.fail())
        {
        cout<<"SORRY,FILE IS NOT CREATED!\n";
        exit(EXIT_FAILURE);
        }
bank ac[10];
int choice;
int num;
    do
    {
           cout<<"\n\nChoice List\n\n";
         cout<<"1)  To assign create new account\n";
         cout<<"2)  To Deposit\n";
         cout<<"3)  To Withdraw\n";
         cout<<"4)  To Display All Details\n";
         cout<<"5)  EXIT\n";
         cout<<"Enter your choice :-";
         cin>>choice;
         switch(choice)
         {
         case 1: cout<<"\n\n\tEnter The account No. : ";
               cin>>num;
              ac[num].create_account();
                  ac[num].write();
                     break;
         case 2: cout<<"\n\n\tEnter The account No. : ";
               cin>>num;

             ac[num].deposit();
                     break;
           case 3:
               cout<<"\n\n\tEnter The account No to withdraw. : ";
               cin>>num;
               ac[num].withdraw();
                     break;
         case 4: ac[num].write();
               ac[num].display();
                     break;
        case 5: goto end;
         }
   }while(1);
end:
return 0;
}
