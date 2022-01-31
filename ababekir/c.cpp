#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x;
cout<<"please guess a number I have inmind from 1-10:";
cin>>x;
if(x>10)
cout<<"The number is too big!"<<endl;
if(x<1)
cout<<"The number is too small!"<<endl;
if(x!=5)
    cout <<"You didn't get right number!"<<endl;
if(x==5)
    cout <<"You did get right number!"<<endl;
cout<<"Thank you and goodbye!"<<endl;
}
