#include <iostream>
#include <windows.h>
#include "Calculator.h"
#include "sum.h"
using namespace std;
int main()
{

    Calculator<double> c;
  //  sum<float> k;
//    cout<<k.product(4.5,7.2);
    cout<<c.Add(4.8,8.5) << endl;
    system("pause");
        return 0;
}
