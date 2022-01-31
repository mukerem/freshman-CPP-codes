#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,sort,choice;
cout<<"what do you want to sort?\n";
cout<<"---------------------------\n";
repeat:
cout<<"1- Number\n";
cout<<"2- String\n";
cin>>choice;
if(choice==1)
{
cout<<"\nEnter the size of the list"<<endl;
cin>>n;
int z[n],y[n],x[n],temp,small;
for (int i=0;i<n;i++)
{
cout<<"input "<<i+1<<" :";
cin>>z[i];
if(sizeof(z[i])!=4)
{
cout<<"\nit is not integer\n";
i--;
system("cls");
}}
do
{
tryagain:
cout<<"\n\n***************menu******************\n";
cout<<"press 1 to bubble sort\n";
cout<<"press 2 to selection sort\n";
cout<<"press 3 to insertion sort\n";
cout<<"press 4 to change input\n";
cout<<"press 5 to Exit\n";
cout<<"\n*******************************\n\n";
cout<<"\t\tEnter your choice:";
cin>>sort;
system("cls");
switch(sort)
{
case 1:
{
for (int i=0;i<n;i++)
{
y[i]=z[i];
x[i]=z[i];
}
cout<<"\n*******************************\n";
cout<<"######BUBBLE SORT ASCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<x[i];
if(i<n-1)
cout<<",";
}
for (int i=0;i<n-1;i++)
{
cout<<"\n*****************\n";
cout<<i+1<<" iteration \n";
cout<<"*****************\n";
for (int j=1;j<n-i;j++)
{
if(x[j]<x[j-1])
swap(x[j],x[j-1]);
for (int k=0;k<n;k++)
{
cout<<x[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}}
cout<<"\n*******************************\n";
cout<<"######BUBBLE SORT DESCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<y[i];
if(i<n-1)
cout<<",";
}
for (int i=0;i<n-1;i++)
{
cout<<"\n*****************\n";
cout<<i+1<<" iteration \n";
cout<<"*****************\n";
for (int j=1;j<n-i;j++)
{
if(y[j]>y[j-1])
swap(y[j],y[j-1]);
for (int k=0;k<n;k++)
{
cout<<y[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}}
break;
}
case 2:
{
for (int i=0;i<n;i++)
{
y[i]=z[i];
x[i]=z[i];
}
cout<<"\n*******************************\n";
cout<<"######SELECTION SORT ASCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<x[i];
if(i<n-1)
cout<<",";
}
for (int i=0;i<n-1;i++)
{
int small=i;
for (int j=i+1;j<n;j++)
{
if(x[j]<x[small])
small=j;
}
swap(x[i],x[small]);
cout<<"\n*****************\n";
cout<<i+1<<" iteration \n";
cout<<"*****************\n";
for (int k=0;k<n;k++)
{
cout<<x[k];
if(k<n-1)
cout<<",";
}}
cout<<endl;
cout<<"\n*******************************\n";
cout<<"######SELECTION SORT DESCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<y[i];
if(i<n-1)
cout<<",";
}
for (int i=0;i<n-1;i++)
{
int small=i;
for (int j=i+1;j<n;j++)
{
if(y[j]>y[small])
small=j;
}
swap(y[i],y[small]);
cout<<"\n*****************\n";
cout<<i+1<<" iteration \n";
cout<<"*****************\n";
for (int k=0;k<n;k++)
{
cout<<y[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}
break;
}
case 3:
{
for (int i=0;i<n;i++)
{
y[i]=z[i];
x[i]=z[i];
}
cout<<"\n*******************************\n";
cout<<"######INSERTION SORT ASCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<x[i];
if(i<n-1)
cout<<",";
}
for (int i=1;i<n;i++)
{
cout<<"\n*****************\n";
cout<<i<<" iteration \n";
cout<<"*****************\n";
temp=x[i];
for (int j=i;j>0;j--)
{
if(temp<x[j-1])
{
x[j]=x[j-1];
x[j-1]=temp;
}
for (int k=0;k<n;k++)
{
cout<<x[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}}
cout<<"\n*******************************\n";
cout<<"######INSERTION SORT DESCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<y[i];
if(i<n-1)
cout<<",";
}
for (int i=1;i<n;i++)
{
cout<<"\n*****************\n";
cout<<i<<" iteration \n";
cout<<"*****************\n";
temp=y[i];
for (int j=i;j>0;j--)
{
if(temp>y[j-1])
{
y[j]=y[j-1];
y[j-1]=temp;
}
for (int k=0;k<n;k++)
{
cout<<y[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}}
break;
}
case 4:
goto repeat;
break;
case 5:
goto end;
default:
{
cout<<"\nInvalid input try again\n";
goto tryagain;
}
}
}
while(1);
}
else if(choice==2)
{
cout<<"\nEnter the size of the list"<<endl;
cin>>n;
string z[n],y[n],x[n],temp,small;
for (int i=0;i<n;i++)
{
cout<<"input "<<i+1<<" :";
cin>>z[i];
}
do
{
again:
cout<<"\n\n***************menu******************\n";
cout<<"press 1 to bubble sort\n";
cout<<"press 2 to selection sort\n";
cout<<"press 3 to insertion sort\n";
cout<<"press 4 to change input\n";
cout<<"press 5 to Exit\n";
cout<<"\n*******************************\n\n";
cout<<"\t\tEnter your choice:";
cin>>sort;
system("cls");
switch(sort)
{
case 1:
{
for (int i=0;i<n;i++)
{
y[i]=z[i];
x[i]=z[i];
}
cout<<"\n*******************************\n";
cout<<"######BUBBLE SORT ASCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<x[i];
if(i<n-1)
cout<<",";
}
for (int i=0;i<n-1;i++)
{
cout<<"\n*****************\n";
cout<<i+1<<" iteration \n";
cout<<"*****************\n";
for (int j=1;j<n-i;j++)
{
if(x[j]<x[j-1])
swap(x[j],x[j-1]);
for (int k=0;k<n;k++)
{
cout<<x[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}}
cout<<"\n*******************************\n";
cout<<"######BUBBLE SORT DESCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<y[i];
if(i<n-1)
cout<<",";
}
for (int i=0;i<n-1;i++)
{
cout<<"\n*****************\n";
cout<<i+1<<" iteration \n";
cout<<"*****************\n";
for (int j=1;j<n-i;j++)
{
if(y[j]>y[j-1])
swap(y[j],y[j-1]);
for (int k=0;k<n;k++)
{
cout<<y[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}}
break;
}
case 2:
{
for (int i=0;i<n;i++)
{
y[i]=z[i];
x[i]=z[i];
}
cout<<"\n*******************************\n";
cout<<"######SELECTION SORT ASCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<x[i];
if(i<n-1)
cout<<",";
}
for (int i=0;i<n-1;i++)
{
int small=i;
for (int j=i+1;j<n;j++)
{
if(x[j]<x[small])
small=j;
}
swap(x[i],x[small]);
cout<<"\n*****************\n";
cout<<i+1<<" iteration \n";
cout<<"*****************\n";
for (int k=0;k<n;k++)
{
cout<<x[k];
if(k<n-1)
cout<<",";
}}
cout<<endl;
cout<<"\n*******************************\n";
cout<<"######SELECTION SORT DESCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<y[i];
if(i<n-1)
cout<<",";
}
for (int i=0;i<n-1;i++)
{
int small=i;
for (int j=i+1;j<n;j++)
{
if(y[j]>y[small])
small=j;
}
swap(y[i],y[small]);
cout<<"\n*****************\n";
cout<<i+1<<" iteration \n";
cout<<"*****************\n";
for (int k=0;k<n;k++)
{
cout<<y[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}
break;
}
case 3:
{
for (int i=0;i<n;i++)
{
y[i]=z[i];
x[i]=z[i];
}
cout<<"\n*******************************\n";
cout<<"######INSERTION SORT ASCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<x[i];
if(i<n-1)
cout<<",";
}
for (int i=1;i<n;i++)
{
cout<<"\n*****************\n";
cout<<i<<" iteration \n";
cout<<"*****************\n";
temp=x[i];
for (int j=i;j>0;j--)
{
if(temp<x[j-1])
{
x[j]=x[j-1];
x[j-1]=temp;
}
for (int k=0;k<n;k++)
{
cout<<x[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}}
cout<<"\n*******************************\n";
cout<<"######INSERTION SORT DESCENDING#########\n";
cout<<"\n*******************************\n";
cout<<"Original unsorted list:";
for (int i=0;i<n;i++)
{
cout<<y[i];
if(i<n-1)
cout<<",";
}
for (int i=1;i<n;i++)
{
cout<<"\n*****************\n";
cout<<i<<" iteration \n";
cout<<"*****************\n";
temp=y[i];
for (int j=i;j>0;j--)
{
if(temp>y[j-1])
{
y[j]=y[j-1];
y[j-1]=temp;
}
for (int k=0;k<n;k++)
{
cout<<y[k];
if(k<n-1)
cout<<",";
}
cout<<endl;
}}
break;
}
case 4:
goto repeat;
break;
case 5:
goto end;
default:
{
cout<<"\nInvalid input try again\n";
goto again;
}
}
}
while(1);
}
else
{
cout<<"\nInvalid input try again\n";
goto repeat;
}
end:
cout<<"\nGOOD BYE\n";
return 0;
}
