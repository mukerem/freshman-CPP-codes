#include <iostream>
#include <string>
using namespace std;
template<class t>
class vectorr
{
private:

    t *data= new t[10];
    int endd=-1;
    int sizee=10;
public:

    t put(t n)
    {
        if(endd<sizee)
            data[++endd]=n;

        else
        {
            t *temp= new t[2*sizee];
            for(int i=0; i<sizee; i++)
                temp[i]=data[i];
            delete(data);
            data=temp;
            sizee=2*sizee;
            data[++endd]=n;
        }

    }
    t get(int i)
    {

        return data[i];
    }
    t searching(t n)
    {
        for(int i=0; i<=endd; i++)
            if(data[i]==n)
            {
                cout<<"data found at index "<<i<<endl;
                return i;

            }

        cout<<"data not found"<<endl;

    }
    t sorting()
    {

    }
    t insertion(t n, int i)
    {
        for(int j=endd; j>=i; j--)
        {
            data[j+1]=data[j];
        }

        data[i]=n;
        endd++;
    }

    t deleting( int i)
    {
        for(int j=i; j<=endd; j++)
            data[j]=data[j+1];
        endd--;
    }
    t display()
    {
        for(int i=0;i<endd;i++)
            cout<<data[i]<<" ";
    }
};
int main()
{
    vectorr<int>a;
    a.put(1);
    a.put(2);
    a.put(3);
    a.put(4);
    a.insertion(5,3);
    cout<<a.get(2);
    a.display();

    a.searching(5);
}
