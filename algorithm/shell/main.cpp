#include <iostream>
using namespace std;
int arr[10]={13,8,36,22,64,9,10,17,2,7};
void display()
{
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<",";
    }
}
int main()
{

    int interval=(10/2),current,hold,i;
    while(interval!=0)
    {
        current=interval;

        while(current<10)
        {
            hold=arr[current];

            i=current-interval;

            while(i>=0 && hold <arr[i])
            {
                arr[i+interval]=arr[i];
                i=i-interval;

            }
           arr[i+interval]=hold;
                current=current+interval;
        }
interval/=2;
    }
       display();
    return 0;
}

