#include<stack>
#include <iostream>
#include "Array2.h"
using namespace std;

//main method for testing
int main()
{
    	Array2 a;
	a.add(18); a.add(34); a.add(45);
	a.set(2,6);
    a.display();
    cout<<a.get(1)<<endl;
	cout<<a.find(18);

}
