#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
int main()
{
while(1){
string name,a="javac ",b="java ",c=".java";
cin>>name;
if(name=="exit")
break;
a+=name+c;
b+=name;
char d[50],e[50];
for(int i=0;i<a.size();i++)
d[i]=a[i];
d[a.size()]='\0';
for(int i=0;i<b.size();i++)
e[i]=b[i];
e[b.size()]='\0';
system(d);
system(e);
cout<<"\n";
system("pause");
system("cls");
}}
