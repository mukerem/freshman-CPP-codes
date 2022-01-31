#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int a,t,x;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>t;
        if(t==1){
            cin>>x;
            q.push(x);
        }
        else if(t==2)
        {
            if(!q.empty())
                q.pop();
        }

        else if(t==3)
        {
            if(!q.empty())
                cout<<q.front();
            else
                cout<<"EMPTY";
                cout<<endl;
        }

    }
    return 0;
}
