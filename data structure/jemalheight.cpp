#include<iostream>
#include<cmath>
const float ge=9.81,gm=1.67;
using namespace std;
int main(){
float h,ve,vm;
cout<<"Enter the height of the ball :";
cin>>h;
cout<<"Bounce\tHeight\t\tV.at earth\tV. at moon\n";
for(int i=1;i<=3;i++){
h=h*2/3;
ve=sqrt(2*ge*h);
vm=sqrt(2*gm*h);
cout<<i<<"\t"<<h<<"\t\t"<<ve<<"\t\t"<<vm<<endl;
}
}
