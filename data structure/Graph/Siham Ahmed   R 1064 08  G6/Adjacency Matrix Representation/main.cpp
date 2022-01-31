#include <iostream>
#define MAX 10
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
template <class GraphType>
class GraphDS
{
private:

     string vertices[MAX];
     GraphType matrix[MAX][MAX];
     int totalVertice;
     int totalEdge;


    public:

        GraphDS(){
        totalEdge=0;
        totalVertice=0;
		for(int i=0;i<MAX;i++)
		   for(int j=0;j<MAX;j++)
		    matrix[i][j]=0;
}
        void insertVertex(string vertex)
        {
			vertices[totalVertice++]=vertex;	
		}
		void insertEdge(string v1, string v2, GraphType weight)
		{
			int i, j;
			i=findIndex(v1);
			j=findIndex(v2);
			matrix[i][j]=weight;
		}
		void removeEdge(string v1, string v2){
		    int i, j;
			i=findIndex(v1);
			j=findIndex(v2);
			matrix[i][j]=0;
		}
		void removeEVertex(string vertex)
		{
		    int i, j;
			i=findIndex(vertex);
			j=totalVertice-1;
			if(i==j)
			{
			    totalVertice--;
			    return;
			
			}
			vertices[i]=vertices[j];
			for(int k=0;k<totalVertice;k++)
			{
			   matrix[i][k]=matrix[j][k];
			   matrix[k][i]=matrix[k][j];
			   matrix[j][k]=0;
			   matrix[k][j]=0;
			}
			totalVertice--;
		}
       private:
       int findIndex(string vertex){
           for(int i=0;i<totalVertice;i++)
            if(vertices[i]==vertex)
                return i;
            return -1;
       }
};
int main()
{
    string A="A",B="B",C="C",D="D",E="E";
    GraphDS<int> G;
    G.insertVertex("A");
    G.insertVertex("B");
    G.insertVertex("C");
    G.insertVertex("D");
    G.insertVertex("E");
    G.insertVertex("F");
    G.insertVertex("G");
    G.insertEdge("A","B",1);
    G.insertEdge("A","D",1);
    G.insertEdge("B","C",1);
    G.insertEdge("B","E",1);
    G.insertEdge("D","E",1);
	G.insertEdge("G","D",1);
    G.insertEdge("E","F",1);
    return 0;
}
