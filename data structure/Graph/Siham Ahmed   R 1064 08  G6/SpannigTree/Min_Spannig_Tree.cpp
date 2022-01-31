#include <iostream>
#include <map>
#include <vector>
#include <windows.h>
using namespace std;
#define INF 1e5
#define siz 100
class MinSpanTree{
private:
	double adjMatrix[siz][siz],cost;
	vector<string> vertex;
	vector<int> visited;
	multimap<double, string> mmap;
	pair<double, string> x;
	int findIndex(string s){
		for (unsigned int i = 0; i < vertex.size(); ++i) {
			if(s == vertex[i])return i;
		}
		return -1;
	}
public:
	MinSpanTree(){
		cost =0;
		for (unsigned int i = 0; i < siz; ++i) {
			for (unsigned int j = 0; j < siz; ++j)
				adjMatrix[i][j] = INF;
		}
	}
	void setVertex(string s){
		vertex.push_back(s);
		visited.push_back(0);
	}
	void setEdge(string s1, string s2, double weg){
		int i =findIndex(s1);
		int j =findIndex(s2);
		if(i ==-1 || j ==-1){cout<<"Invalid input";return;}
		adjMatrix[i][j] = weg;
		adjMatrix[j][i] = weg;
	}
	double spannTree(string s){
		int i = findIndex(s);
		if(i ==-1){cout<<"Invalid input";return 0;}
		for (unsigned int j = 0; j < vertex.size(); ++j){
			if(adjMatrix[i][j] != INF && visited[j] ==0){
				x.first = adjMatrix[i][j];
				x.second = vertex[j];
				mmap.insert(x);
			}
		}
		visited[i] =1;
		while(!mmap.empty()){
			multimap<double, string>::iterator it=mmap.begin();
			int k =findIndex(it->second);
			if(visited[k]==1){
                it=mmap.begin();
				mmap.erase(it);
			}
			else{
                cost +=it->first;
                spannTree(it->second);
			}
		}
		return cost;
	}
	void dsplay(){
		for (unsigned int i = 0; i < vertex.size(); ++i) {
			for (unsigned int j = 0; j < vertex.size(); ++j)
				{cout<<adjMatrix[i][j]<<" ";}cout<<endl;
		}
	}
};
int main() {
	MinSpanTree tree;
	tree.setVertex("1");tree.setVertex("2");tree.setVertex("3");
	tree.setVertex("4");tree.setVertex("5");
	tree.setVertex("6");tree.setVertex("7");

	tree.setEdge("1","2",11);tree.setEdge("1","4",40);
	tree.setEdge("2","3",20);tree.setEdge("2","4",61);
	tree.setEdge("2","5",40);tree.setEdge("3","5",50);
	tree.setEdge("3","6",80);tree.setEdge("4","5",33);
	tree.setEdge("4","7",40);tree.setEdge("5","6",81);
	tree.setEdge("5","7",72);tree.setEdge("6","7",33);

	//tree.dsplay();
	cout <<"\nCost Of Minimum Spanning Tree = ";
	cout<<tree.spannTree("1")<<endl;
	//tree.dsplay();
	return 0;
}
