#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string file="digital.txt";
ofstream digital;
digital.open(file.c_str());
string text;
int array[7]={0,0,0,0,0,0,0},ascii,num,index;
do
{
cin>>text;
for(int i=0;i<text.size();i++)
{
if(text[text.size()-1]=='!')
goto end;
ascii=int(text[i]);
num=ascii;
index=6;
while(num>0)
{
array[index--]=num%2;
num=num/2;
}
for(int i=0;i<7;i++)
cout<<array[i];
cout<<"\t";
}
cout<<"\t";
}
while(1);
end:
    return 0;
}
