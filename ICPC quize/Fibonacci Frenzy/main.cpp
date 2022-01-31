#include <iostream>

using namespace std;
 int n,m,a[10010],k=0,d;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a[-1]=2,a[0]=3,k=0;
        cin>>m;
        if(m==4)
            cout<<1<<endl;
        else{
        while(m>a[k]){
             k++;
            a[k]=a[k-1]+a[k-2];
           }
           d=m-a[k-1];
           k-=3;
        while(k>-1){
            d+=a[k]-1;
            k--;}
            cout<<d+1<<endl;}
    }
    return 0;
}
