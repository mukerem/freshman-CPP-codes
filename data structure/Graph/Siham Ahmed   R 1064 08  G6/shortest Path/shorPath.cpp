#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
#define INF 1e5
#define mx 100
class ShortPath{
private:
	unsigned int x,k;
	double arrList[mx][mx];
	vector<double> distance;
	vector<int> visited;
	vector<string> vertex;


	int searchIndex(string s){
		for (unsigned int i = 0; i < vertex.size(); ++i)
			if(s == vertex[i])return i;
		return -1;
	}
	void calculetDistanc(string start, double dist){
		int i = searchIndex(start);
		visited[i] = 1;
		double newd,temp=INF;
		for (unsigned int j = 0; j < vertex.size(); ++j) {
			if(visited[j] == 0){
				newd = dist+arrList[i][j];
				if(distance[j] >= newd)distance[j]=newd;
				if(distance[j] < temp){temp = distance[j];k=j;}
			}
		}
		if(x < vertex.size()-2){
            x++;
			calculetDistanc(vertex[k],temp);
		}
	}
public:
	ShortPath(){
		x =0;k =0;
		for (int i = 0; i < mx; ++i)
			for (int j = 0; j < mx; ++j)
				arrList[i][j] =INF;
	}
	void setVertex(string s){
		vertex.push_back(s);
		distance.push_back(INF);
		visited.push_back(0);
	}
	void setEdge(string s1, string s2, double dis){
		int i = searchIndex(s1);
		int j = searchIndex(s2);
		if(i ==-1 || j ==-1){cout<<"Invalid Input";return;}
		arrList[i][j] = dis;
		arrList[j][i] = dis;
	}
	void calculet(string start, string end){
		cout<<"The shortest distance "<<start<<" to "<<end<<" = :";
		calculetDistanc(start,0);
		int i = searchIndex(start);
		distance[i]=0;
		int i1 = searchIndex(end);
		cout<<distance[i1];
	}
};
int main() {
	ShortPath path;
	path.setVertex("A");path.setVertex("B");path.setVertex("C");
	path.setVertex("D");path.setVertex("E");

	path.setEdge("A","B",5);path.setEdge("A","E",2);
	path.setEdge("A","C",3);path.setEdge("C","B",1);
	path.setEdge("D","B",6);path.setEdge("E","B",6);
	path.setEdge("C","D",2);path.setEdge("C","E",2);
	path.setEdge("D","E",4);

	path.calculet("E","B");
	return 0;
}
