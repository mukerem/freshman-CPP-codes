#include<bits/stdc++.h>
#define Max 100
int maxx=100;
using namespace std;
class Graph{
private:
double AM[100][100];
int tv;
vector <string > ver;
public:
Graph(){
tv=0;
}
void insertVertex(string v){
ver.push_back(v);
for(int i=0;i<Max ;i++)
{
AM[tv][i]=0;
AM[i][tv]=0;
}
tv++;
}
void insertEdge(string v1,string v2,double w){
int i1=search(v1);
int i2=search(v2);
AM[i1][i2]=w;
AM[i2][i1]=w;

}
int search(string v){
for(int i=0;i<ver.size() ;i++){
if(ver[i]==v)
return i;
}
return -1;
}
void removeEdge(string v1,string v2){
int i1=search(v1);
int i2=search(v2);
AM[i1][i2]=0;
AM[i2][i1]=0;

}
void removeVertex(string v){
int i=search(v);
for(int k=i;k<tv-1;k++){
    for(int j=0;j<tv-1;j++){
    AM[k][j]=AM[k+1][j];
    AM[j][k]=AM[j][k+1];
    }
ver[k]=ver[k+1];
}
tv--;
ver.pop_back();
}
void BFS(string v){
int k=search(v);
queue<int > s;
bool visited[Max];
for(int i=0;i<Max;i++)
visited[i]=false;
s.push(k);
visited[k]=true;
while(!s.empty()){
k=s.front();
s.pop();
cout<<ver[k]<<"  ";
for(int i=0;i<tv;i++){
if(AM[k][i]!=0&&visited[i]==false){
s.push(i);
visited[i]=true;
}
}
}
cout<<endl;
}
void DFS(string v){
int k=search(v);
stack<int > s;
bool visited[Max];
for(int i=0;i<Max;i++)
visited[i]=false;
s.push(k);
visited[k]=true;
while(!s.empty()){
k=s.top();
s.pop();
cout<<ver[k]<<"  ";
for(int i=0;i<tv;i++){
if(AM[k][i]!=0&&visited[i]==false){
s.push(i);
visited[i]=true;
}
}
}
cout<<endl;

for(int i=0;i<tv;i++){
  for(int j=0;j<tv;j++){
    cout<<setw(5)<<AM[i][j];
  }
  cout<<endl;
}
}
};
int main(){
Graph g;
g.insertVertex("A");
g.insertVertex("B");
g.insertVertex("C");
g.insertVertex("D");
g.insertVertex("E");
g.insertEdge("A","B",15);
g.insertEdge("B","C",5);
g.insertEdge("C","D",15);
g.insertEdge("D","E",25);
g.insertEdge("A","D",15);
//g.removeVertex("A");
g.DFS("D");
g.BFS("D");
}
