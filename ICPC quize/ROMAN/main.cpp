#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int ii=0;ii<n;ii++){
    stack<char> st;
    int num = 0;
    for(int i=0;i<2;i++)
    {
        string s;
        cin>>s;
        int k =0;
        while(k<s.size())
        {
            st.push(s[k]);
            k++;
        }
        while(!st.empty())
        {
            if(st.top()=='I')
            {
                num += 1;
                st.pop();
            }
            else if(st.top()=='V')
            {
                st.pop();
                if(!st.empty()&&st.top()=='I')
                {
                    num += 4;
                    st.pop();
                }
                else
                    num  += 5;
            }
            else if(st.top()=='X')
             {
                st.pop();
                if(!st.empty()&&st.top()=='I')
                {
                    num += 9;
                    st.pop();
                }
                else
                    num += 10;
             }
            else if(st.top()=='L')
             {
                st.pop();
                if(!st.empty()&&st.top()=='X')
                {
                    num += 40;
                    st.pop();
                }
                else
                    num += 50;
             }
            else if(st.top()=='C')
             {
                st.pop();
                if(!st.empty()&&st.top()=='X')
                {
                    num += 90;
                    st.pop();
                }
                else
                    num += 100;
             }
            else if(st.top()=='D')
             {
                st.pop();
                if(!st.empty()&&st.top()=='C')
                {
                    num += 400;
                    st.pop();
                }
                else
                    num += 500;
             }
            else if(st.top()=='M')
             {
                st.pop();
                if(!st.empty()&&st.top()=='C')
                {
                    num += 900;
                    st.pop();
                }
                else
                    num += 1000;
             }
        }
    }
    int r = num/1000;
    num %=1000;
    if(r > 0)
    {
        while(r>0)
        {
            cout<<'M';
            r--;
        }
    }
    r = num/500;
    num %=500;
    if(r > 1)
    {
        while(r>1)
        {
            cout<<'D';
            r--;
        }
    }
    else if(r==1)
    {
        r = num/100;
        if(r==4)
        {
             num %=100;
             cout<<"CM";
        }
        else
            cout<<'D';
    }
    r = num/100;
    num %=100;
    if(r > 0)
    {
        if(r==4)
            cout<<"CD";
        else
        {
            while(r>0)
            {
                cout<<'C';
                r--;
            }
        }
    }
    r = num/50;
    num %=50;
    if(r == 1)
    {
         r = num/10;
         if(r==4)
         {
             cout<<"XC";
             num %=10;
         }
         else
            cout<<'L';
    }
    r = num/10;
    num %=10;
    if(r > 0)
    {
        if(r==4)
            cout<<"XL";
        else
        {
            while(r>0)
            {
                cout<<'X';
                r--;
            }
        }
    }
    r = num/5;
    num %=5;
    if(r==1&&num==4)
        cout<<"IX";
    else if(num==4)
        cout<<"IV";
    else
    {
        if(r==1)
            cout<<'V';
        while(num>0)
        {
            cout<<'I';
            num--;
        }
    }
    cout<<endl;
    }
    return 0;
}
