#include <bits/stdc++.h>
using namespace std;
int main()
{
cout<<"The instruction for playing this game\n";
cout<<"_______________________________________\n";
cout<<"1)You must choose two digit number (i.e 10-99)\n";
cout<<"2)Substruct the sum of each digit number from the chosen number\n";
cout<<"3)Search your result from the table\n";
cout<<"For example you choose 32\n 32-(3+2)=27\n your result is 27\n"<<endl;
cout<<"To continue this game press ENTER\n"<<endl;
do
{
cin.get();
cout<<"Search your result from the table and see the spelling that is found in the right side of your result\n\n"<<endl;
cout<<setw(4);
int cont,answer,choice,like,paper,value,constant,random;
float k;
char magic[88];
srand(time(NULL));
for(int i=0;i<=88;i++)
{
random=rand();
constant=random%26+65;
magic[i]=char(constant);
}
for(int j=1;j<=9;j++)
magic[j*9]=magic[9];
for(int i=0;i<11;i++)
{
for(int j=1;j<=8;j++)
cout<<j+i*8<<setw(3)<<magic[j+i*8]<<setw(4);
cout<<endl;
}
cout<<"\n\n Amazing! I know the spelling you see from the table\nDo you want to display the spelling ?\nTo see the magic press ENTER "<<endl;
cin.get();
cout<<"\n\n"<<setw(5)<<magic[9]<<"  Is your letter \nRight or Wrong?\n\n";
cout<<" If you like this game press 1 other wise  0\n";
cin>>like;
string file="magic.txt";
ifstream rim;
rim.open(file.c_str());
rim>>paper;
paper++;
ofstream rapi;
rapi.open(file.c_str());
rapi<<paper;
rapi.close();
string game="magic2.txt";
ifstream comment;
comment.open(game.c_str());
comment>>k;
if(like==1)
{
k++;
cout<<paper<<" person is  play this game and "<<100*k/paper<<"% of them like \n";
}
else
{
cout<<paper<<" person is  play this game and "<<100*k/paper<<"% of them like \n";
}
ofstream share;
share.open(game.c_str());
share<<k;
share.close();
 cout<<"\n\nChoice List\n\n";
         cout<<"1)  To play again this game\n";
         cout<<"2)  To EXIT\n";
         cin>>choice;
         switch(choice)
         {
         case 1: break;
         case 2: goto end;
         }
 }while(1);
 end:
cout<<"Thank you\n";
return 0;
}

