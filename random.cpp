#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
int i,ran;
srand(time(NULL));
for(i=0;i<10;i++)
{
ran=rand();
cout<<char(ran%26+65)<<endl;
}
}
