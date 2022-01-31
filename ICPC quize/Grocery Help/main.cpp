#include <iostream>

using namespace std;

int main()
{
    int n,t,p,q,tt;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        int sum=0;
        for(int j=0;j<t;j++)
        {
            cin>>tt;
            if(tt==1)
            {
                cin>>p>>q;
                sum+=q*p;
            }
            else if(tt==2)
            {
                cin>>p;
                sum+=p;
            }
            else
            {
                cin>>p;
                sum+=p;
            }
        }
        cout<<"Day "<<i+1<<": $"<<sum<<"."<<endl;
    }
    return 0;
}
