#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
int main()
{
while(1){
string name ,b="java ";
cin>>name;
if(name=="exit")
break;
b+=name;
char e[50];
for(int i=0;i<b.size();i++)
e[i]=b[i];
e[b.size()]='\0';
system(e);
cout<<"\n";
system("pause");
system("cls");
}}

