#include<iostream>
using namespace std;
int main(){
int a[5]={1,5,4,2,6};
try{
cout<<a[-2];
}catch(exception e){
cout<<"aa";
}
}
