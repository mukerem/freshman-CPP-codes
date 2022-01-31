#include<iostream>
#include<vector>
template <typename t>
class muke{
private :
t *data;
int current,size;
public:
muke()
{
t data=new t[10];
size=10;
current=-1;
}};
int put(t item)
{
    if(currnet < size)
    data[++current]=item;
    else{
        t *temp=new t[2*size];
        for(int i=0;i<size;i++)
            temp[i]=data[i];
        delete data;
        data=temp;
        size*=2;
        data[++current]=item;
    }
}
t get(int i)
{
    return data[i];
}
int main()
{
muke< string >names;
names.put("Rapi");
names.put("Ali");
}
