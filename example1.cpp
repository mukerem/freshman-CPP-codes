#include<iostream>
#include<cmath>
using namespace std;
int main(){
int t=90000;
for (int y=1;y<1000;y++){
    int x=(y*y*y*y)/4.0+(y*y*y)/2.0+(y*y)/4.0;
    if (x==t){
        cout<<y;
        break;
    }

}
}
