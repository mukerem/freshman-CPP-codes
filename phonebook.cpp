#include <iostream>
#include <fstream>
using namespace std;

struct phonebook
{
    string name;
    string phonenum;
} ;
phonebook contacts[10];
int acc=0;
void getvalue();
void viewcontact();
void alphaorder();
void swaps(int i,int j);
void searchcontact();
void logfile();
void update();
void option();


int main()
{
    update();
    cout<<"Contacts in SIM1"<<endl;
    char uproceed;
    do
    {
        cout<<"     1.List contacts  \n";
        cout<<"     2.Search \n";
        cout<<"     3.Add new contact \n";
        option();

        cout << "Go back to main menu..enter 'y'...";
        cin>>uproceed;

            } while(uproceed=='y');
    logfile();

}
void option()
{
     int userinput;
    cout<<"Enter your chioce NUMBER>>";cin>>userinput;
    if (userinput==1)
    {
        alphaorder();
        viewcontact();}
    else if (userinput==2)
        searchcontact();
    else if (userinput==3)
        getvalue();
}

void getvalue()
{
    char userproceed;
    do {
        cout<<" Enter the phone number>>";
        cin>>contacts[acc].phonenum;
        cout<<" Enter First name>>";
        cin>>contacts[acc].name;
        acc++;
        cout<<"Do u wanna proceed in addin another contact...Enter y if yes...";
        cin>>userproceed;
        } while(userproceed=='y');

}
void viewcontact()
{
    for(int i=0;i<10;i++)
   {
        cout<<contacts[i].name<<"\t";
        cout<<contacts[i].phonenum;
        cout<<endl;
   }
}
void alphaorder()
{
    int numelm=acc+1;
    for (int i=0;i<numelm;i++)
    {
        for (int j=0;j<numelm-i;j++)
        {
        int bub1=numelm-j;
        int bub2=numelm-(j+1);
        if (contacts[bub1].name<contacts[bub2].name)
            swaps(bub1,bub2);
        }
    }
}
void swaps(int i,int j)
{
    phonebook inter;
    inter=contacts[i];
    contacts[i]=contacts[j];
    contacts[j]=inter;
}

void searchcontact()
{
    string nquery;
    cout<<"search for:";
    cin>>nquery;
    cout<<"search result for: "<<nquery<<endl;
    for(int i=0;i<=acc;i++)
    {
        if (nquery==contacts[i].name)
            cout<<contacts[i].name<<endl;
            cout<<contacts[i].phonenum<<endl;
    }
}
void logfile()
{
    ofstream write;
    string file="contacts.txt";
    write.open(file.c_str());
    for(int i=0;i<=acc;i++)
    {
       write<<contacts[i].name<<" "<<contacts[i].phonenum<<endl;
    }
    write.close();
}
void update()
{
    ifstream read;
    string file="contacts.txt";
    read.open(file.c_str());
    string name;
    string phoneno;
    int i=0;
    while(read.good())
    {
       read>>contacts[i].name;
       read>>contacts[i].phonenum ;
       i++;
    }

}
