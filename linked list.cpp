#include<bits/stdc++.h>
using namespace std;
struct muke
{
int num;
string player;
muke *next;
};
int main()
{
muke *head=NULL;
muke *messi;
messi=new muke();
messi->num=1;
messi->player="messi";
head=messi;
cin>>messi->num;
cin>>messi->player;
if(head==NULL)
{
head=messi;
messi->next=NULL;
}
else
{
messi->next=head;
head=messi;
}
cout<<messi->num;
cout<<messi->player;
cout<<head->next<<endl;
cout<<messi;
}
