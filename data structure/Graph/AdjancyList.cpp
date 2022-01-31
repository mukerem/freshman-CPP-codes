#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class Graph{
private :
vector <string >l[100],vertex;
bool check[100];
stack <int> s;
queue <int> m;
public:
void insertVertex(string v){
vertex.push_back(v);
}
void insertEdge(string v1 , string v2){
int i1=searchVertex(v1);
int i2=searchVertex(v2);
if(i1==-1)
cout<<"the vertex  "<<v1<<" does not exit\n";
else if(i2==-1)
cout<<"the vertex "<<v2<<" does not exit\n";
else{
l[i1].push_back(v2);
l[i2].push_back(v1);
}}
void deleteEdge(string v1, string v2){
int i1=searchVertex(v1);
int i2=searchVertex(v2);
int k1=searchIndex(i1 , v2);
int k2=searchIndex(i2 , v1);
if(i1==-1)
cout<<"the vertex  "<<v1<<" does not exit\n";
else if(i2==-1)
cout<<"the vertex "<<v2<<" does not exit\n";
else if(k1==-1||k2==-1)
cout<<"the edge between "<<v1<<" and "<<v2<<" does not exit\n";
else{
l[i1].erase(l[i1].begin()+k1);
l[i2].erase(l[i2].begin()+k2);
}}
void deleteVertex(string v){
int k=searchVertex(v);
if(k==-1)
cout<<"the vertex  "<<v<<" does not exit\n";
else {
for(int i=0;i<l[k].size();i++){
int n=searchVertex(l[k][i]);
int m=searchIndex(n,v);
l[n].erase(l[n].begin()+m);
}
l[k].clear();
for(int i=k;i<vertex.size();i++)
l[i]=l[i+1];
vertex.erase(vertex.begin()+k);
l[vertex.size()].clear();
}}
int searchIndex(int n , string v){
for(int i=0;i<l[n].size();i++)
if(v==l[n][i])
return i;
return -1;
}
int searchVertex(string v){
for(int i=0;i<vertex.size();i++)
if(v==vertex[i])
return i;
return -1;
}
void display(){
for(int i=0;i<vertex.size();i++){
cout<<vertex[i];
for(int j=0;j<l[i].size();j++){
if(j!=l[i].size())
cout<<" ==> ";
cout<<l[i][j];
}
cout<<endl;
}
}
void DFS(string v){
    cout<<endl;
for(int i=0;i<vertex.size();i++)
check[i]=false;
int k=searchVertex(v);
s.push(k);
while(!s.empty()){
k=s.top();
s.pop();
check[k]=true;
cout<<vertex[k]<<" ";
for(int i=0;i<l[k].size();i++){
int r=searchVertex(l[k][i]);
if(check[r]==false)
s.push(r);
}
}
cout<<endl;
}
void BFS(string v){
cout<<endl;
for(int i=0;i<vertex.size();i++)
check[i]=false;
int k=searchVertex(v);
m.push(k);
while(!m.empty()){
k=m.front();
m.pop();
check[k]=true;
cout<<vertex[k]<<" ";
for(int i=0;i<l[k].size();i++){
int r=searchVertex(l[k][i]);
if(check[r]==false)
m.push(r);
}
}
cout<<endl;
}
};
int main(){
Graph s;
s.insertVertex("C");
s.insertVertex("A");
s.insertVertex("D");
s.insertVertex("B");
s.insertVertex("E");
s.insertVertex("F");
s.insertVertex("H");
s.insertVertex("I");
s.insertVertex("N");
s.deleteVertex("N");
s.insertVertex("G");
s.insertVertex("J");
s.insertVertex("K");
s.insertVertex("L");
s.insertVertex("M");
s.insertEdge("B","C");
s.insertEdge("A","D");
s.insertEdge("C","A");
s.insertEdge("F","C");
s.insertEdge("A","E");
s.insertEdge("F","A");
s.insertEdge("B","H");
s.insertEdge("J","D");
s.insertEdge("C","K");
s.insertEdge("F","M");
s.insertEdge("K","L");
s.insertEdge("J","A");
s.deleteEdge("A","D");
s.deleteEdge("A","C");
s.deleteEdge("H","D");
s.deleteEdge("L","M");
s.deleteVertex("A");
s.display();
s.DFS("C");
s.BFS("C");
}
