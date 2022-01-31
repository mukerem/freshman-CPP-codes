#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int x=7,y=3;
string file,ret;
char z[7]="sample";
{
int x=6,c=4;
cout<<x<<endl<<c<<endl<<y<<endl;
}
cout<<x<<endl<<y<<z[2]<<endl;
cin>>file;
ifstream in;
in.open(file.c_str());
if(in.fail());
cout<<"yes";
in>>ret;
cout<<ret;
}
