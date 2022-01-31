#include<iostream>
using namespace std;
void insert();
//void delet();
void search();
void menu();
struct table
{
string word;
table *next;
}hash[101];
int main()
{
table *a;
a=hash[4];
cout<<&a;
}
