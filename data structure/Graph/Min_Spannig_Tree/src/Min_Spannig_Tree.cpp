#include <iostream>
#include <map>
#include <vector>
#include <windows.h>
using namespace std;
//#define INF 1e5
#define siz 100
class MinSpanspan{
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
	MinSpanspan(){
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
	double spannspan(string s){
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
                spannspan(it->second);
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
	MinSpanspan span;
	span.setVertex("A");span.setVertex("B");span.setVertex("C");
	span.setVertex("D");span.setVertex("E");
	span.setVertex("F");span.setVertex("G");

	span.setEdge("A","B",11);span.setEdge("A","D",40);
	span.setEdge("B","C",20);span.setEdge("B","D",61);
	span.setEdge("B","E",40);span.setEdge("C","E",50);
	span.setEdge("C","F",80);span.setEdge("D","E",33);
	span.setEdge("D","G",40);span.setEdge("E","F",81);
	span.setEdge("E","G",72);span.setEdge("F","G",33);

	//span.dsplay();
	cout <<"\nCost Of Minimum Spanning span = ";
	cout<<span.spannspan("A")<<endl;
	//span.dsplay();
	return 0;
}
