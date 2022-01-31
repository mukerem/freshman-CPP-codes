#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"a, Read the whole records of the file"<<endl
    <<"---------------------------------------------------------"<<endl;
    string line;
    ifstream inf("Employee.txt");
    cout<<"Name     Sex  Position  Phone      Address"<<endl;
    while(getline(inf, line))
        cout<<line<<endl;
    inf.close();
    cout<<"\nb, Add to records on the existing file"<<endl
    <<"--------------------------------------------------------------"<<endl;
    string filename = "Employee.txt";
    ofstream outFile;
    outFile.open(filename.c_str(),ios::app);
    if (outFile.fail())
    {
        cout << "The file was not successfully opened" << endl;
        exit(1);
    }
    string name,sex,position,phone,adress;
    for(int i=0;i<10;i++){
     cout <<"--------------------------------------------------------------"<<endl;
    cout<<"Enter name of "<<i+1<<" employee -> ";
    cin>>name;
    cout<<"Enter sex -> ";
    cin>>sex;
    cout<<"Enter position of employee -> ";
    cin>>position;
    cout<<"Enter phone number -> ";
    cin>>phone;
    cout<<"Enter Address -> ";
    cin>>adress;
    outFile<<name<<"    "<<sex<<"    "<<position<<"    "<<phone<<"    "<<adress<<endl;
    }
    outFile.close();
    cout<<"\nRead the current records again"<<endl
    <<"---------------------------------------------------------------"<<endl;
    cout<<"Name     Sex  Position  Phone      Address"<<endl;
    ifstream infile("Employee.txt");
    while(getline(infile, line))
        cout<<line<<endl;
    infile.close();
    return 0;
}
