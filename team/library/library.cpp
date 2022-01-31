#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int loan(int );
int new_book(int , string ,string ,string ,string ,int ,string ,int);
void write_in_web();
int main()
{
int num,id,page,catagory,count;
string book,code,author,publish_year,sale_date;
do{
cout<<"\tWhat you want\n\t~~~~~~~~~~~~`\n";
cout<<"\t1)Loan\n\t2)Return\n\t3)Books\n\t4)Current Books\n\t6)Loan Books\n\t7)Return Books";
cout<<"\n\t8)New Books\n\t9)Delete Books\n\t10)Members\n\t11)Exit\n";
cin>>num;
if(num==1)
{
again3:
cout<<"\t\t\tid NO.?(1-100)\t";
cin>>id;
if(id<1||id>100)
{
cout<<"\nInvalid id \n";
goto again3;
}
loan(id);
}
else if(num==8)
{
cout<<"Enter:\n";
cout<<"catagogry:";
cin>>catagory;
cout<<"book name:";
cin>>book;
cout<<"author:";
cin>>author;
cout<<"code:";
cin>>code;
cout<<"publish year:";
cin>>publish_year;
cout<<"page:";
cin>>page;
cout<<"sale date:";
cin>>sale_date;
cout<<"how many:";
cin>>count;
new_book(catagory,book,author,code,publish_year,page,sale_date,count);
write_in_web();
}
else
break;
}while(1);
return 0;
}
int loan(int id)
{
cout<<id;
}
int new_book(int catagory,string book,string author,string code,string publish_year,int page,string sale_date,int count)
{
int num;
char a[]="1.txt";
a[0]=catagory;
ifstream number("size.txt");
number>>num;
cout<<num;
ofstream file("book.txt", ios::app);
file<<++num<<"\t"<<book<<"\t"<<author<<"\t"<<code<<"\t"<<publish_year<<"\t"<<page<<"\t"<<sale_date<<"\t"<<count<<"\n";
ofstream number2("size.txt");
number2<<num;
}
void write_in_web()
{
int page,count,num;
string book,code,author,publish_year,sale_date;
ifstream out("book.txt");
ofstream html("bookweb.html");
html<<"<!doctype html>\n<html >\n<head>\n<title>library.com</title>"<<endl;
html<<"<h2 style=\"font-family:Colonna MT;color:#669900\" align=\"center\">ASTUMSJ Library Books</h2></head>"<<endl;
html<<"<div id=\"menu\" align=\"center\"><font face=\"arial\" size=3 color=\"#993300\">"<<endl;
html<<"<a href=\"homepage.html\">Home</a>|<a href=\"webtable.html\">Table</a>|<a href=\"result.html\">Result</a>|<a href=\"score.html\">Score</a>|<a href=\"video.html\">Video</a></font></div>"<<endl;
html<<"<body bgcolor=\"009900\"  background=\"image.jpg\">\n<font face=\"Tekton Pro Ext\" size=\"5\" color=\"#990000\">\n<pre><b>"<<endl;
html<<"No\tTitle\t\tAuthor\t\tCode\tPub.year\tPage\tSale date\tcount\n";
while(out>>num>>book>>author>>code>>publish_year>>page>>sale_date>>count)
html<<num<<"\t"<<book<<"\t\t"<<author<<"\t\t"<<code<<"\t"<<publish_year<<"\t\t"<<page<<"\t"<<sale_date<<"\t"<<count<<"\n";
html<<"</b></pre></font></body></html>";
}
