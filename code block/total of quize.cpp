#include <iostream>

using namespace std;

int main()
{
    float mark[5][4],aver,max,min,smx,smn,sum=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"enter quize"<<j+1<<"for student"<<i+1<<endl;
            cin>>mark[i][j];
            sum=sum+mark[i][j];
        }
        aver=sum/3;
        mark[i][3]=aver;
        sum=0;
    }
    max=mark[0][3];
    smx=1;
    min=mark[0][3];
    smn=1;
    for(int i=1;i<5;i++)
    {
        if(max<mark[i][3])
        {
         max=mark[i][3];
        smx=i+1;
        }
       if(min>mark[i][3])
        {
         min=mark[i][3];
        smn=i+1;
        }

    }
    cout<<"student\t quize1\t quize2\t quize3\t   aver\t \n";
    cout<<"------   ------   -----  -----  ------\n";
     for(int i=0;i<5;i++)
     {
         cout<<i+1<<"\t";
         for(int j=0;j<4;j++)

             cout<<mark[i][j]<<"\t";


             cout<<endl;
         }
         cout<<"maximum mark is  "<<max<<"   scored by student   "<<smx;
         cout<<endl;
         cout<<"minmum mark is   "<<min<<"   scored by student   "<<smn;
         cout<<endl;


    return 0;
}
