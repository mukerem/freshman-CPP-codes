#include <bits/stdc++.h>
using namespace std;
class sorting
{
private:
    int list;
public:
    void bubble();
    void selection();
    void insertion();
};
void introductory()
{
if
}
void sorting::bubble()
{
int n,num,list;
cout<<"enter the size of the list"<<endl;
cin>>n;
string name[n],temp;
cout<<"enter "<<n<<" strings  randomly "<<endl;
for (int i=0;i<n;i++)
cin>>name[i];
cout<<"\n\nChoice List\n\n";
cout<<"1)  To ascending order\n";
cout<<"2)  To descending order\n";
cin>>list;
for (int i=0;i<n-1;i++)
{
cout<<"\n\n"<<i+1<<" iteration \n\n";
for (int j=1;j<n-i;j++)
{
if(list==1&&name[j]<name[j-1])
{
temp=name[j];
name[j]=name[j-1];
name[j-1]=temp;
}
if(list==2&&name[j]>name[j-1])
{
temp=name[j];
name[j]=name[j-1];
name[j-1]=temp;
}
for (int k=0;k<n;k++)
cout<<"\t"<<name[k]<<"\t\t";
cout<<endl;
}}}
void sorting::selection()
{
int n,small,num,list;
cout<<"enter the size of the list"<<endl;
cin>>n;
string name[n],temp;
cout<<"enter "<<n<<" strings  randomly "<<endl;
for (int i=0;i<n;i++)
cin>>name[i];
cout<<"\n\nChoice List\n\n";
cout<<"1)  To ascending order\n";
cout<<"2)  To descending order\n";
cin>>list;
for (int i=0;i<n-1;i++)
{
int small=i;
for (int j=i+1;j<n;j++)
{
if(list==1&&name[j]<name[small])small=j;
if(list==2&&name[j]>name[small])small=j;
}
temp=name[i];
name[i]=name[small];
name[small]=temp;
cout<<"\n\n"<<i+1<<" iteration \n\n";
for (int k=0;k<n;k++)
cout<<"\t"<<name[k]<<"\t\t";
cout<<endl;
}}
void sorting::insertion()
{
int n,num;
cout<<"enter the size of the list"<<endl;
cin>>n;
string name[n],temp;
cout<<"enter "<<n<<" strings  randomly "<<endl;
for (int i=0;i<n;i++)
cin>>name[i];
cout<<"\n\nChoice List\n\n";
cout<<"1)  To ascending order\n";
cout<<"2)  To descending order\n";
cin>>list;
for (int i=1;i<n;i++)
{
cout<<"\n\n"<<i<<" iteration \n\n";
temp=name[i];
for (int j=i;j>0;j--)
{
if(list==1&&temp<name[j-1])
{
name[j]=name[j-1];
name[j-1]=temp;
}
if(list==2&&temp>name[j-1])
{
name[j]=name[j-1];
name[j-1]=temp;
}
for (int k=0;k<n;k++)
cout<<"\t"<<name[k]<<"\t\t";
cout<<endl;
}}}
int  main()
{
int choice;
sorting formula;
do
{
cout<<"\n\n\n\n\n\nChoice List\n\n";
cout<<"1)  To bubble sort\n";
cout<<"2)  To selection\n";
cout<<"3)  To insertion\n";
cout<<"4)  To EXIT\n";
cin>>choice;
         switch(choice)
         {
         case 1:formula.bubble();
                break;
         case 2:formula.selection();
                break;
         case 3:formula.insertion();
                break;
         default: goto end;
         }
}
while(1);
end:
return 0;
}
