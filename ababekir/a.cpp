#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
cout<<"char size="<<sizeof(char)<<"bytes\n";
cout<<"short size="<<sizeof(short)<<"bytes\n";
cout<<"int size="<<sizeof(int)<<"bytes\n";
cout<<"long size="<<sizeof(long)<<"bytes\n";
cout<<"float size="<<sizeof(float)<<"bytes\n";
cout<<"double size="<<sizeof(double)<<"bytes\n";
cout<<"1.55 size="<<sizeof(1.55)<<"bytes\n";
cout<<"1.55L size="<<sizeof(1.55L)<<"bytes\n";
cout<<"HELLO size="<<sizeof("HELLO")<<"bytes\n";
getch();
return 0;

}
