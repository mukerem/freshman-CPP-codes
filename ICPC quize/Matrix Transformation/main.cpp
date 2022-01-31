#include <iostream>

using namespace std;

int main()
{
    int r,c,a[35][35],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>r>>c;
         for(int j=0;j<r;j++)
         {
             for(int k=0;k<c;k++)
                cin>>a[j][k];
         }
         for(int j=0;j<r;j++)
         {
             for(int k=0;k<c-1;k++)
                {
                    a[j][k+1]-=a[j][k];
                    a[j][k]=0;
                }
         }
         for(int j=0;j<r-1;j++)
         {
             a[j+1][c-1]-=a[j][c-1];
             a[j][c-1]=0;
         }
         cout<<"Case #"<<i+1;
         if(a[r-1][c-1]==0)
            cout<<": YES"<<endl;
         else
            cout<<": NO"<<endl;
    }

    return 0;
}
