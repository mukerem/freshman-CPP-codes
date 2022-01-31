#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int operand1,operand2;
char operato;
cout<<"Enter two numbers"<<endl;
cin>>operand1>>operand2;
cout<<"Enter one of the these operators '+','*','/','-'"<<endl;
cin>>operato;
switch(operato)
{
case'+':
cout<<operand1+operand2;
break;
case'-':
cout<<operand1-operand2;
break;
case'*':
cout<<operand1*operand2;
break;
case'/':
cout<<operand1/operand2;
break;
default:
cout<<"unknown operator:"<<operato<<"\n";
break;
}
}
