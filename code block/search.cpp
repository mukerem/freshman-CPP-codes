#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,x[10000],a=0;
srand(time(NULL));
for(int i=0;i<10000;i++)
x[i]=rand();
for(int i=0;i<10000;i++)
cout<<x[i]<<"\t";
cout<<"enter a number"<<endl;
cin>>n;
for(int i=0;i<10000;i++)
{
if(n==x[i])
{
a++;
break;
}
}
if(a>0)
cout<<n<<" is  found in x"<<endl;
else
cout<<n<<" is not found in x"<<endl;
return 0;
}
