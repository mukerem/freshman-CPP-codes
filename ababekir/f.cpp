#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int operand1,operand2;
char operato;
double result;
cout<<"Enter two numbers"<<endl;
cin>>operand1>>operand2;
cout<<"Enter one of the these operators '+','*','/','-'"<<endl;
cin>>operato;
if(operato=='+')
cout<<operand1+operand2;

else if(operato=='-')
cout<<operand1-operand2;
else if(operato=='*')
cout<<operand1*operand2;
else if(operato=='/')
cout<<operand1/operand2;
else
cout<<"unknown operator:"<<operato<<"\n";
}
