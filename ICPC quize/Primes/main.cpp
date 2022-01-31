#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long a[800],b[800];
    a[0]=2,a[1]=3,b[0]=2,b[1]=5;
    int k=5,l=2;
    for(int i=0;i<40000;i++){
        bool lo = true;
        for(int j=2;j<=sqrt(k);j++)
        {
            if(k%j==0)
            {
                lo = false;
                break;
            }
        }
        if(lo)
        {
            a[l]=k;
            b[l]=b[l-1]+a[l];
            l++;
        }
        k++;
        if(l==800)
            break;
    }
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cout<<b[x];
        cout<<endl;
    }
    return 0;
}
