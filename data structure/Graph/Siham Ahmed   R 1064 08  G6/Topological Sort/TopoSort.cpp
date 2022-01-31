#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
#define mx 100
class TopSort{
private:
	int n=0;
	vector<string> data;
	bool visited[mx];
	int adjMatrix[mx][mx];
	int searchIndex(string str){
		for (unsigned int i = 0; i < data.size(); ++i){
			if (str == data[i])
				return i;
		}
		return -1;
	}
public:
	void putVertex(string str){
		data.push_back(str);
		visited[n++] =false;
	}
	void putEdge(string str1, string str2){
		int i = searchIndex(str1);
		int j = searchIndex(str2);
		if(i == -1 || j == -1){cout<<"Vertex dos't exist\n";return;}
		adjMatrix[i][j] =1;
	}
	void delEdge(string str1, string str2){
		int i = searchIndex(str1);
		int j = searchIndex(str2);
		if(i == -1 || j == -1){cout<<"Vertex dos't exist\n";return;}
		adjMatrix[i][j] =0;
	}
	void sorT(){
		for (unsigned int i = 0; i < data.size(); ++i){
                while(visited[i])i++;
			for (unsigned int j = 0; j < data.size(); ++j){
				if(adjMatrix[j][i] ==1||visited[i]==true){
					i++;j=-1;
				}
			}
			if(!visited[i])
                cout<<data[i]<<" ";
			visited[i]=true;
			for (unsigned int j = 0; j < data.size(); ++j)
				adjMatrix[i][j] =0;
			for (unsigned int j = 0; j < data.size(); ++j)
				if(visited[j]==false)sorT();
            return;
		}
	}
	void dis(){
		for (unsigned int k = 0; k < data.size(); ++k) {
			for (unsigned int j = 0; j < data.size(); ++j)
				cout<<adjMatrix[k][j]<<" ";
		cout<<"\n";
		}
	}
};
int main() {
	TopSort g;
	g.putVertex("a");g.putVertex("b");g.putVertex("c");
	g.putVertex("d");g.putVertex("e");g.putVertex("f");
	g.putVertex("g");

	g.putEdge("a","b");g.putEdge("a","d");g.putEdge("b","c");
	g.putEdge("d","e");g.putEdge("b","e");g.putEdge("g","d");
	g.putEdge("e","f");g.putEdge("e","c");

    g.dis();
	cout <<"\nTopological sort :";
	g.sorT();
	return 0;
}
