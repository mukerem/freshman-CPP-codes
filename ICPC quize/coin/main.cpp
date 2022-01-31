#include <iostream>

using namespace std;

int main()
{
   int n;
    cin>>n;
    int a[n][15],d[n];
    for(int i=0;i<n;i++){
        cin>>d[i];
    for(int j=0;j<d[i];j++)
        cin>>a[i][j];
        }
    for(int i=0;i<n;i++){
            int c=0;
    for(int j=0;j<d[i]-1;j++){
        if(2*a[i][j]<=a[i][j+1])
            c++;
            }
        cout<<"Denominations: ";
        for(int j=0;j<d[i];j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
        if(c==d[i]-1)
            cout<<"Good coin denominations!";
        else
            cout<<"Bad coin denominations!";
        cout<<endl;
    }
    return 0;
}
