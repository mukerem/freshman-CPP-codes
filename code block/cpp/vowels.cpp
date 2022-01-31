#include<iostream>
using namespace std;
int main()
{
int count=0;
string name;
cin>>name;
for(int i=0;i<name.size();i++)
{
if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'||
   name[i]=='a'||name[i]=='e'||name[i]=='o'||name[i]=='i'||name[i]=='u')
count++;
}
cout<<count;
}
