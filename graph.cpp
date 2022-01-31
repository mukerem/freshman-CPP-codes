#include <bits/stdc++.h>
using namespace std;
void addvertex(char label);
void addedge(int first,int last);
struct vertex
{
char label;
bool visited;
};
vertex *vertexarray[7];
int adj[7][7];
int count=0;
int main()
{
for (int i=0;i<7;i++)
for (int j=0;j<7;j++)
adj[i][j]=0;
addvertex('1');
addvertex('2');
addvertex('3');
addvertex('4');
addvertex('5');
addvertex('6');
addvertex('7');
addedge(1,0);
addedge(2,0);
addedge(3,0);
addedge(4,0);
depthfirstsearch();
}
void addvertex(char label)
{
vertex *v=new vertex();
v->labeel=label;
v->visited=false;
vertexarray[count++]=v;
}
void addedge(int first,int last)
{
adj[first][last]=1;
adj[last][first]=1;
}
void depthfirstsearch()
