#include <iostream>
#include <fstream>
#include <iomanip>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;
struct student
{
string name;
int play;
int win;
int drawn;
int lose;
int scored;
int concide;
int goal;
int point;
}team[10];
int main()
{
int home,away,choice,point,lose,drawn,win;
team[0].name="Arsenal";
team[1].name="Chelsea";
team[2].name="Everton";
team[3].name="Liecster";
team[4].name="Liverpool";
team[5].name="Mancity";
team[6].name="Manutd";
team[7].name="Southampton";
team[8].name="Totneham";
team[9].name="Westham";
cout<<"\t\t\tID number of teams\n";
cout<<"\t\t0)Arsenal\t\t\t1)Chelsea\n";
cout<<"\t\t2)Everton\t\t\t3)Liecster\n";
cout<<"\t\t4)Liverpool\t\t\t5)Mancity\n";
cout<<"\t\t6)Manutd\t\t\t7)Southampton\n";
cout<<"\t\t8)Totneham\t\t\t9)Westham\n";
do
{
cout<<"Enter ID of home team\n";
cin>>home;
cout<<"Enter ID of away team\n";
cin>>away;
cout<<"\t"<<team[home].name <<"  vs  "<< team[away].name<<endl;
cout<<"Enter goal of "<<team[home].name<<endl;
cin>>team[home].scored;
cout<<"Enter goal of "<<team[away].name<<endl;
cin>>team[away].scored;
cout<<team[home].name<<setw(5)<<team[home].scored<<endl;
cout<<team[away].name<<setw(5)<<team[away].scored<<endl;
team[home].goal=team[home].scored-team[away].scored;
team[away].goal=team[away].scored-team[home].scored;
if(team[home].scored>team[away].scored)
{
team[home].point=point+3;
team[home].win++;
team[away].lose++;
}
else if(team[home].scored<team[away].scored)
{
team[away].point=point+3;
team[away].win++;
team[lose].lose++;
}
else
{
team[home].point++;
team[home].drawn++;
team[away].point++;
team[away].drawn++;
}
         cout<<"1)  To edit another game\n";
         cout<<"2)  To EXIT\n";
         cin>>choice;
         switch(choice)
         {
         case 1:
                     break;
         case 2: goto end;
         }
 }while(1);
end:
return 0;
}
