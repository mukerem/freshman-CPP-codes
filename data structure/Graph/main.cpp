#include <iostream>
#include <queue>
#include <stack>
using namespace std;
#define infinty = 9999
queue<int> q;
stack<int> s;
int edg, vex;
const int size = 100;
int adjMatrix[size][size];
bool visitB[size];
bool visitD[size];

void put(int edg)
{
    cout<<"Enter Edge...........................\n";
    int x, y;
    for(int i=0; i<edg; i++)
    {
        cin>>x>>y;
        adjMatrix[x][y] = 1;
        adjMatrix[y][x] = 1;
    }
}
    /**< BFS ********************/
void inseCHIB(int i)
{
    for(int j=1; j<=vex; j++)
    {
        if(adjMatrix[i][j]==1)
        {
            if(visitB[j]==0){
                q.push(j);
                visitB[j] = 1;
            }
        }
    }
}
void dipBFS(int v)
{
    q.push(v);
    visitB[v] = 1;
    while(!q.empty())
    {
        inseCHIB(q.front());
        cout<<q.front()<<" ";
        q.pop();
    }
}
/**< DFS **********************************/
void inseCHID(int i)
{
    for(int j=1; j<=vex; j++)
    {
        if(adjMatrix[i][j]==1)
        {
            if(visitD[j]==0){
                s.push(j);
                visitD[s.top()] = 1;
            }
            adjMatrix[i][j] = 0;
            adjMatrix[j][i] = 0;
         return;
        }
    }
   cout<<s.top()<<" ";
   s.pop();
}
void dipDFS(int v)
{
    s.push(v);
    visitD[s.top()] = 1;
    while(!s.empty())
        inseCHID(s.top());
}
int main()
{

    cout<<"ENTER NO. OF THE VERTEX :- ";
    cin>>vex;
    cout<<"ENTER NO. OF THE EDGE :- ";
    cin>>edg;
    put(edg);
    int star1, star2;
    cout<<"\n************ TRAVERS BFS ******************\n";
    cout<<"Starting point :- ";
    cin>>star1;
    dipBFS(star1);
    cout<<"\n************ TRAVERS DFS ******************\n";
    cout<<"Starting point :- ";
    cin>>star2;
    dipDFS(star2);
    return 0;
}
