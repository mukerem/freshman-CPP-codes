#include<bits/stdc++.h>
using namespace std;
int main()
{
string muke="calendar.txt";
ofstream y;
y.open(muke.c_str());
for(int i=1350;i<=1550;i++)
y<<i<<endl;
y.close();
}

