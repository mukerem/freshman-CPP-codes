#include <iostream>
using namespace std;
int main()
{
int x;
double fnum, snum;
cout << "Please type in two numbers: ";
cin >> fnum >> snum;
cout << "Enter a select code: ";
cout << "\n 1 for addition";
cout << "\n 2 for multiplication";
cout << "\n 3 for division : ";
cin >> x;
switch (2)
{
case 0:
cout << "The sum of the numbers entered is " << fnum+snum;
break;
case 2:
cout << "The product of the numbers entered is "<< fnum*snum;
break;
case 3:
cout << "The first number divided by the second is " << fnum/snum;
break;
} // end of switch
cout << endl;
return 0;
}
