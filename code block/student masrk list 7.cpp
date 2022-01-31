#include <iostream>
#include <iomanip>
//#include <cstring>
using namespace std;
char calculategrade(double courseAver);
int main()
{
char name[10][30];
 cout<<"enter name of the ten students\n";
 for(int i=0;i<10;i++)
 {
 cin.getline(name[i],30);
 }
char id[10][30];
 cout<<"enter id number of the ten students\n";
 for(int i=0;i<10;i++)
 {
 cin.getline(id[i],30);
 }

 char dept[10][30];
 cout<<"enter departement of the ten students\n";
 for(int i=0;i<10;i++)
 {
 cin.getline(dept[i],30);
 }

    float course[10][8],max,min,smx,smn,mid,final,total=0;
char cours[10];
    for(int i=0;i<10;i++)

        {

            cout<<"enter  mid   for student"<<i+1<<endl;
            cin>>course[i][3];

            cout<<"enter final  for student"<<i+1<<endl;
            cin>>course[i][4];
            course[i][5]=course[i][3]+course[i][4];
        course[i][6]=course[i][5]/2;

}

    max=course[0][6];
    smx=1;
    min=course[0][6];
    smn=1;
    for(int i=0;i<10;i++)
    {
        if(max<course[i][6])
        {
         max=course[i][6];
        smx=i+1;
        }
       if(min>course[i][6])
        {
         min=course[i][6];
        smn=i+1;
        }

    }

   for(int i=0;i<10;i++)
    {
   if(course[i][6]>=90)
   cours[i]='A';
   else if(course[i][6]>=80)
   cours[i]='B';
   else if(course[i][6]>=70)
   cours[i]='C';
   else if(course[i][6]>=60)
   cours[i]='D';
   else
   cours[i]='F';
    }
   cout<<" name\t  id\t  departement\t   mid \t    final\t total\t    aver\t      grade\n";
    cout<<"------   ----     ------------     ----      -----       -----       ------       -----   \n";
    for(int i=0;i<10;i++)
        {
          cout<<name[i]<<setw(12)<<id[i]<<setw(12)<<dept[i]<<setw(12)<<course[i][3]<<setw(12);
          cout<<course[i][4]<<setw(12)<<course[i][5]<<setw(12)<<course[i][6]<<setw(12)<<cours[i]<<endl;
}
          cout<<"maximum mark is  "<<max<<"   scored by student   "<<smx;
         cout<<endl;
         cout<<"minmum mark is   "<<min<<"   scored by student   "<<smn;
         cout<<endl;


    return 0;
}
