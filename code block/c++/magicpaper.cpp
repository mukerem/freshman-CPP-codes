#include <iostream>
#include <fstream>
#include<ctime>
#include <iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
int paper,cont,answer,like,view;
string file="magic.txt";
ifstream rim;
rim.open(file.c_str());
rim>>paper;
char magic[90];
int value,constant;
srand(time(NULL));
for(int i=0;i<90;i++)
{
constant=(rand())%26+65;
magic[i]=char(constant);
}
cout<<"YOU CHOOSE TWO DIGIT NUMBER THEN SUBSTRUCT THE SUMATION OF EACH DIGIT\n"<<endl<<" FROM THE ORIGINAL NUMBER THEN YOU GET THE RESULT \n\n"<<endl;
cout<<"For example YOU CHOOSE 32\n\n "<<endl<<"32-(3+2)=27\n\n"<<endl<<"YOUR RESULT IS 27\n\n\n\n"<<endl;
cout<<"TO CONTUNIUE THIS GAME ENTER 0\n"<<endl;
cin>>cont;
cout<<"FIND YOUR RESULT NUMBER IN THE NUMBER TABLE AND SEE THE LETTER THAT IS FOUND IN THE RIGHT SIDE OF YOUR RESULT NUMBER\n\n"<<endl;
cout<<setw(4);
for(int j=1;j<=9;j++)
magic[j*9]=magic[9];
for(int i=0;i<11;i++)
{
for(int j=1;j<=8;j++)
cout<<j+i*8<<setw(3)<<magic[j+i*8]<<setw(4);

cout<<endl;
}
paper++;
ofstream rapi;
rapi.open(file.c_str());
rapi<<paper;
rapi.close();
cout<<"\n\n\n WOW I KNOW YOUR RESULT \n YOU WANT TO DISPLAY YOUR LETTER YOU SEE IN THE ABOVE TABLE?\n\nENTER 1 TO SEE THE MAGIC\n\n "<<endl;
cin>>answer;
cout<<"\n\n"<<setw(5)<<magic[9]<<"  IS YOUR LETTER \nRIGHT OR WRONG?\n\n";
cout<<"IF YOU LIKE THIS GAME ENTER 5\n";
int k;
string game="magic2.txt";
ifstream commen;
commen.open(game.c_str());
commen>>k;
cin>>like;
if(like==5)
{
view++;
cout<<paper<<" PERSONS PLAY THIS GAME AND "<<view<<" OF THEM LIKE THIS GAME INCLUDE YOU \n";
cout<<"THANK YOU\n";
}
else
{
cout<<paper<<" PERSONS PLAY THIS GAME AND "<<view<<" OF THEM LIKE THIS GAME EXNCLUDE \n";
cout<<"THANK YOU\n";
}
ofstream share;
share.open(game.c_str());
share<<view;
share.close();

}

