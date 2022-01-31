#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
int dat;
string data;
ifstream team("liver pool.txt");
if(team.is_open())
{
while(team.good())
{
team>>dat;
if(dat==1)
{
getline(team,dat);
cout<<dat<<endl;
}
}
team.close();
}
}

