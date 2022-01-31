#include <iostream>
#include <fstream>
#include <iomanip>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
int input();
int display(string ,int ,int);
int table();
int write(string , string  ,int  ,int );
void copy_to_file();
void copy_to_score_board();
void result(string home_team, string away_team ,int home_team_goal ,int away_team_goal,int week);
void see_result();
void web();
int new_tour();
string team[6]={"Academic","Counseling","Daewa&Know.","Finance's","Information","Social_Service"};
int main()
{
input();
}
int input(){
int home,away,scored,goal, another,num,week;
do{
cout<<"\tWhat you want\n\t~~~~~~~~~~~~`\n";
cout<<"\t1)Score\n\t2)Table\n\t3)Results\n\t4)New Season\n\t5)Exit\n";
cin>>num;
if(num==1)
{
again3:
cout<<"\t\t\tWeek NO.?(1-9)\t";
cin>>week;
if(week<1||week>9)
{
cout<<"\nInvalid week \n";
goto again3;
}
cout<<"\t\t\tID number of teams\n";
cout<<"\t\t1)Academic\t\t\t2)Counseling\n";
cout<<"\t\t3)Daewa&know\t\t\t4)Finance\n";
cout<<"\t\t5)Information\t\t\t6)Social Service\n";
again:
cout<<"\n\nEnter ID of home team:\t";
cin>>home;
if(home<1||home>6)
{
cout<<"Invalid ID Enter the correct ID\n";
goto again;
}
again2:
cout<<"Enter ID of away team:\t";
cin>>away;
if(away<1||away>6)
{
cout<<"Invalid ID Enter the correct ID\n";
goto again2;
}
else if(away==home)
{
cout<<"Home team & Away team  must be different teams\n";
goto again2;
}
cout<<"\n\n\t"<<team[home-1] <<"  vs  "<< team[away-1]<<"\n\n\n";
cout<<"Enter the final result of the match\n\n";
cout<<team[home-1]<<"\t";
cin>>scored;
cout<<team[away-1]<<"\t";
cin>>goal;
cout<<"\n\t\t\tThe final result is\n\n\t\t\t"<<team[home-1]<<"\t"<<scored<<" - "<<goal<<"\t"<<team[away-1]<<"\n\n\n";
result(team[home-1],team[away-1],scored,goal,week);
write(team[home-1],team[away-1],scored,goal);
copy_to_file();
copy_to_score_board();
web();
}
else if(num==2)
table();
else if(num==3)
see_result();
else if(num==4)
new_tour();
else
break;
cout<<"\n\n\n";
system("pause");
system("cls");
}
while(1);
}
int write(string home_team, string away_team ,int home_team_goal ,int away_team_goal)
{
ifstream file("read.txt");
ofstream data("sector.txt");
int play,win,drawn,lose,score,concided,goal,point;
string name;
while(file >> name >>play>>win>>drawn>>lose>>score>>concided>>goal>>point){
 if(name==home_team){
data<<name<<"\t\t"<<play+1<<"\t";
 if( home_team_goal > away_team_goal)
data<<win+1<<"\t"<<drawn<<"\t"<<lose<<"\t"<<score+home_team_goal<<"\t"<<
concided+away_team_goal<<"\t"<<goal+home_team_goal-away_team_goal<<"\t"<<point+3<<endl;
else if( home_team_goal < away_team_goal)
data<<win<<"\t"<<drawn<<"\t"<<lose+1<<"\t"<<score+home_team_goal<<"\t"<<
concided+away_team_goal<<"\t"<<goal+home_team_goal-away_team_goal<<"\t"<<point<<endl;
else
data<<win<<"\t"<<drawn+1<<"\t"<<lose<<"\t"<<score+home_team_goal<<"\t"<<
concided+away_team_goal<<"\t"<<goal<<"\t"<<point+1<<endl;
 }
else if(name==away_team){
data<<name<<"\t\t"<<play+1<<"\t";
 if( home_team_goal < away_team_goal)
data<<win+1<<"\t"<<drawn<<"\t"<<lose<<"\t"<<score+away_team_goal<<"\t"<<
concided+home_team_goal<<"\t"<<goal-home_team_goal+away_team_goal<<"\t"<<point+3<<endl;
else if( home_team_goal > away_team_goal)
data<<win<<"\t"<<drawn<<"\t"<<lose+1<<"\t"<<score+away_team_goal<<"\t"<<
concided+home_team_goal<<"\t"<<goal-home_team_goal+away_team_goal<<"\t"<<point<<endl;
else
data<<win<<"\t"<<drawn+1<<"\t"<<lose<<"\t"<<score+away_team_goal<<"\t"<<
concided+home_team_goal<<"\t"<<goal<<"\t"<<point+1<<endl;
}
else
data<<name<<"\t\t"<<play<<"\t"<<win<<"\t"<<drawn<<"\t"<<lose<<"\t"<<score<<"\t"<<
concided<<"\t"<<goal<<"\t"<<point<<endl;
}
}
void copy_to_file()
{
ifstream file("sector.txt");
int play,win,drawn,lose,score,concided,goal,point;
string name;
ofstream read("read.txt");
while(file >> name >>play>>win>>drawn>>lose>>score>>concided>>goal>>point){
read<<name<<"\t\t"<<play<<"\t"<<win<<"\t"<<drawn<<"\t"<<lose<<"\t"<<score<<"\t"<<
concided<<"\t"<<goal<<"\t"<<point<<endl;
}

}
void copy_to_score_board(){
ofstream data("scoreboard.txt");
int play,win,drawn,lose,score,concided,goal,point,count=0,max,max_goal,max_score;
string name,max_name,array[6];
while(count<6)
{
max=-1;
ifstream read("read.txt");
while(read >> name >>play>>win>>drawn>>lose>>score>>concided>>goal>>point){
int check=0;
for(int i=0;i<count;i++)
{
if(name==array[i])
{
check++;
break;
}
}
if(check==0)
{
if(max<point)
{
max_name=name;
max=point;
max_goal=goal;
max_score=score;
}
else if(max==point)
{
if(max_goal<goal)
{
max_name=name;
max=point;
max_goal=goal;
max_score=score;
}
else if(max_goal==goal)
{
if(max_score<score)
{
max_name=name;
max=point;
max_goal=goal;
max_score=score;
}
else if(max_score==score)
{
if(max_name>name)
{
max_name=name;
max=point;
max_goal=goal;
max_score=score;
}
}
}
}
}
}
ifstream read2("read.txt");
int play2,win2,drawn2,lose2,score2,concided2,goal2,point2;
string name2;
while(read2>> name2 >>play2>>win2>>drawn2>>lose2>>score2>>concided2>>goal2>>point2)
if(name2==max_name)
{
data<<name2<<"\t\t"<<play2<<"\t"<<win2<<"\t"<<drawn2<<"\t"<<lose2<<"\t"<<score2<<"\t"<<
concided2<<"\t"<<goal2<<"\t"<<point2<<endl;
array[count++]=max_name;
}
}
}
void web()
{
    //***********write in html
ifstream file2("scoreboard.txt");
ofstream html("webtable.html");
int play2,win2,drawn2,lose2,score2,concided2,goal2,point2;
string name2;
html<<"<!doctype html>\n<html >\n<head>\n<title>Rapi.com</title>"<<endl;
html<<"<h2 style=\"font-family:Colonna MT;color:#669900\" align=\"center\">ASTUMSJ Football League</h2></head>"<<endl;
html<<"<div id=\"menu\" align=\"center\"><font face=\"arial\" size=3 color=\"#993300\">"<<endl;
html<<"<a href=\"homepage.html\">Home</a>|<a href=\"webtable.html\">Table</a>|<a href=\"result.html\">Result</a>|<a href=\"score.html\">Score</a>|<a href=\"video.html\">Video</a></font></div>"<<endl;
html<<"<body bgcolor=\"009900\"  background=\"image.jpg\">\n<font face=\"Tekton Pro Ext\" size=\"5\" color=\"#990000\">\n<pre>"<<endl;
html<<"Team\t\t\tPlay\tWin\tDrawn\tLose\tScored\tCoin.\tGoal\tPoint\n";
while(file2 >> name2 >>play2>>win2>>drawn2>>lose2>>score2>>concided2>>goal2>>point2){
html<<name2<<"\t\t"<<play2<<"\t"<<win2<<"\t"<<drawn2<<"\t"<<lose2<<"\t"<<score2<<"\t"<<
concided2<<"\t"<<goal2<<"\t"<<point2<<endl;
}
html<<"</pre></font></body></html>";

//*************
}
int table()
{
ifstream file("scoreboard.txt");
int play,win,drawn,lose,score,concided,goal,point;
string name;
cout<<"Team\t\t\tP\tW\tD\tL\tS\tC\tG\tPoint\n";
while(file >> name >>play>>win>>drawn>>lose>>score>>concided>>goal>>point){
cout<<name<<"\t\t"<<play<<"\t"<<win<<"\t"<<drawn<<"\t"<<lose<<"\t"<<score<<"\t"<<
concided<<"\t"<<goal<<"\t"<<point<<endl;
}
}
void result(string home_team, string away_team ,int home_team_goal ,int away_team_goal,int week)
{
char a[]="week1.txt",b[]="weekcopy.txt",c[]="webweek1.html";
a[4]=48+week;
c[7]=48+week;
ofstream file(a, ios::app);
file<<home_team<<"\t"<<home_team_goal<<endl;
file<<away_team<<"\t"<<away_team_goal<<endl;
file<<endl<<endl;

//*********write in web
ifstream file3(a);
ofstream html(c);
html<<"<!doctype html>\n<html >\n<head>\n<title>Hijra.com</title>"<<endl;
html<<"<font face=\"arial\" size=3 ><a href=\"result.html\" ><img src=\"back2.png\" /></a></font>"<<endl;
html<<"<h2 style=\"font-family:Colonna MT;color:#669900\" align=\"center\">ASTUMSJ Football League<br>Week "<<week<<" result</h2></head>"<<endl;
html<<"<body bgcolor=\"009900\"  background=\"image.jpg\">\n<font face=\"Tekton Pro Ext\" size=\"5\" color=\"#990000\">\n<pre>"<<endl;
int goal3,space3=0;
string name3;
while(file3 >> name3 >>goal3){
html<<name3<<"\t"<<goal3<<endl;
space3++;
if(space3%2==0)
html<<endl<<endl;
}
html<<"</pre></font></body></html>";
//*************
}
void see_result()
{
int week , goal,space=0;
again:
cout<<"Enter the week of the match that you want(1-9)\n";
cin>>week;
if(week<1||week>9)
{
cout<<"\nInvalid week \n";
goto again;
}
char a[]="week1.txt";
a[4]=48+week;
ifstream file(a);
string name;
cout<<"ASTUMSJ Football League week "<<week<<" result\n\n";
while(file >> name >>goal){
cout<<name<<"\t"<<goal<<endl;
space++;
if(space%2==0)
cout<<endl<<endl;
}
}
int new_tour()
{
char a[]="week1.txt",c[]="webweek1.html";
for(int week=1;week<10;week++)
{
a[4]=48+week;
c[7]=48+week;
ofstream file(a),html(c);
file<<"";
html<<"<!doctype html>\n<html >\n<head>\n<title>Hijra.com</title>"<<endl;
html<<"<font face=\"arial\" size=3 ><a href=\"result.html\" ><img src=\"back2.png\" /></a></font>"<<endl;
html<<"<h2 style=\"font-family:Colonna MT;color:#669900\" align=\"center\">ASTUMSJ Football League<br>Week "<<week<<" result</h2></head>"<<endl;
html<<"<body bgcolor=\"009900\"  background=\"image.jpg\">\n<font face=\"Tekton Pro Ext\" size=\"5\" color=\"#990000\">\n"<<endl;
html<<"</font></body></html>";
}
ifstream file2("liverpool.txt");
ofstream read("read.txt");
ofstream read2("scoreboard.txt");
int play,win,drawn,lose,score,concided,goal,point;
string name;
///////////to new season for web
ofstream html("webtable.html");
html<<"<!doctype html>\n<html >\n<head>\n<title>Rapi.com</title>"<<endl;
html<<"<h2 style=\"font-family:Colonna MT;color:#669900\" align=\"center\">ASTUMSJ Football League</h2></head>"<<endl;
html<<"<div id=\"menu\" align=\"center\"><font face=\"arial\" size=3 color=\"#993300\">"<<endl;
html<<"<a href=\"homepage.html\">Home</a>|<a href=\"webtable.html\">Table</a>|<a href=\"result.html\">Result</a>|<a href=\"score.html\">Score</a>|<a href=\"video.html\">Video</a></font></div>"<<endl;
html<<"<body bgcolor=\"009900\"  background=\"image.jpg\">\n<font face=\"Tekton Pro Ext\" size=\"5\" color=\"#990000\">\n<pre>"<<endl;
html<<"Team\t\t\tPlay\tWin\tDrawn\tLose\tScored\tCoin.\tGoal\tPoint\n";
///////
while(file2 >> name >>play>>win>>drawn>>lose>>score>>concided>>goal>>point){
read<<name<<"\t\t"<<play<<"\t"<<win<<"\t"<<drawn<<"\t"<<lose<<"\t"<<score<<"\t"<<
concided<<"\t"<<goal<<"\t"<<point<<endl;
html<<name<<"\t\t"<<play<<"\t"<<win<<"\t"<<drawn<<"\t"<<lose<<"\t"<<score<<"\t"<<
concided<<"\t"<<goal<<"\t"<<point<<endl;
read2<<name<<"\t\t"<<play<<"\t"<<win<<"\t"<<drawn<<"\t"<<lose<<"\t"<<score<<"\t"<<
concided<<"\t"<<goal<<"\t"<<point<<endl;
}
}
