#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
int c=-1,sum=0,que;
cout<<"Enter the number of questions\n";
cin>>que;
int mark[que];
cout<<"Instruction for mark\nEnter 1 for correct answer\nEnter 0 for wrong answer\n";
for(int i=0;i<que;i++)
{
cout<<"Enter question number "<<i+1<<endl;
cin>>mark[i];
if(mark[i]==1)
{
c++;
sum=sum+mark[i]+c;
}
else
{
if(c>=0)
c=-1;
}
}
cout<<"The total mark is "<<sum;
}
