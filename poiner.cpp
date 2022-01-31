#include<iostream>
using namespace std ;
int main(){
int *x= new int;
*x=5;
cout<<*x;
delete x;
*x=15;
cout<<*x;

int numgrades=3, i;

int grades[numgrades]={10,2,31},*p=grades;

cout << "\nAn array was created for " << numgrades << " integers\n";
cout << " The values stored in the array are:";
for (i = 0; i < numgrades; i++)
cout << "\n " << ++*p;
cout << endl;

cout << "\n " << *p;

}
