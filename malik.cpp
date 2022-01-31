#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
string s;
char c,a[42],b[]={'P','l','e','a','s','e',' ','M','a','l','i','k',' ',
'A','n','s','w','e','r',' ','t','h','e',' ','f','o','l','l','o','w','i','n','g',' ','Q','u','e','s','t','i','o','n'};
for(int i=0;;i++)
{
c=getch();
if(c=='\r')
{
a[i]='\0';
break;
}
if(c=='\b')
{
i-=2;;
cout<<"\b \b";
}
else if(c==';')
{
cout<<b[i];
a[i]='\0';
}
else
{
cout<<b[i];
a[i]=c;
}
}
cout<<endl;
cin>>s;
system("cls");
if(a[0]!='.')
cout<<"\n\n"<<a<<"\n\n";
else
cout<<"\n\n10 Push Up sira\n\n";
}
