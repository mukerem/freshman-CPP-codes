# include<iostream>
using namespace std;
class A{
 private:
    int a;
    int d;
 public:
    void showcomplex(int,int);
    void set of(int,int);
    void get of();
     };
     void A::showcoplex(int b,int c)
     {
         a=b;
         d=c;
     }
     void A::set of(int real,int imagenary);
     {
         a=real;
         d=imagenary;
     }
     void A::get of()
     {
         cout<<" the number is found to be "<<a<<"  "<<d<<endl;
     }
main(){
       A k,j(40,20);
       j.set of();
       j.get of();
       k.showcomplex(80,20);
       k.get of();
      }
