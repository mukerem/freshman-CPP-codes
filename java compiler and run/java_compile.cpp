#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
int main()
{
while(1){
string name,a="javac ",c=".java";
cin>>name;
if(name=="exit")
break;
a+=name+c;
char d[50];
for(int i=0;i<a.size();i++)
d[i]=a[i];
d[a.size()]='\0';
system(d);
cout<<"\n";
system("pause");
system("cls");
}}

