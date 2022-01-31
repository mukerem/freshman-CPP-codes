#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
    char ch[5010]="",a[55];
    vector<char> b,ac;
    vector<int> ab;
    int n,k=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        strcat(ch,a);
    }
    sort(ch,ch+strlen(ch));
    b.clear();ab.clear();ac.clear();
    if(b.empty()&&ab.empty()&&ac.empty())
    for(int i=0;i<strlen(ch);i++)
    {
        int c=1, j=i+1;
        while(ch[j-1]==ch[j]){
            c++;j++;i++;
        }
        b.push_back(ch[i]);
        ac.push_back(ch[i]);
        ab.push_back(c);k++;
    }

    for(int i=0;i<k-1;i++)
    {
        int j=i+1;
        while(j>0&&(ab[j]>ab[j-1]||(ab[j]==ab[j-1]&&b[j]<b[j-1])))
        {
            swap(ab[j],ab[j-1]);swap(b[j],b[j-1]);j--;
        }
    }

    cout<<"Frequencies #"<<l+1<<": ";
    for(int i=0;i<k;i++)
        cout<<b[i];
        k=0;
    for(char ii='a';ii<='z';ii++)
    {
        if(ac[k]==ii)
            k++;
        else
            cout<<ii;
    }
    cout<<endl;
    }
    return 0;
}
