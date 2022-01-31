#include <iostream>

#include<iostream>
using namespace std;
struct vertex
{
	char label;
	bool visited;
};
vertex *veretexArray[5];
int vertexCount=0;
int adjMatrix[5][5];
int top=-1;
int stack[5];
void addVertex(char label);
void addEdge(int start,int end);
void depthFirstSearch();
void push(int);
int pop();
int getAdjecent(int);
int getAdjecent(int index)
{
	for(int i=0;i<5;i++)
	{
		if(adjMatrix[index][i]==true && veretexArray[i]->visited==false)
		{
			return i;
		}

	}
	return -1;
}
int pop()
{
	return stack[top--];
}
void push(int index)
{
	stack[++top]=index;
}
void depthFirstSearch()
{
	cout<<veretexArray[0]->label<<",";
	veretexArray[0]->visited=true;
	push(0);
	while(top!=-1)
	{

		int unVisited=getAdjecent(stack[top]);
		if(unVisited==-1)
		{
			pop();
		}
		else
		{
			cout<<veretexArray[unVisited]->label<<",";
			veretexArray[unVisited]->visited=true;
			push(unVisited);
		}
	}
}
void addEdge(int start,int end)
{
	adjMatrix[start][end]=true;
	adjMatrix[end][start]=true;
}

void addVertex(char label)
{
	vertex *v=new vertex();
	v->label=label;
	v->visited=false;
	veretexArray[vertexCount++]=v;

}
int main()
{ int i,j;
for(int i = 0; i<5; i++)
	{

for(int j = 0; j<5; j++)
adjMatrix[i][j] = 0;
}

	addVertex('S');
	addVertex('a');
	addVertex('b');
	addVertex('c');
	addVertex('d');

	addEdge(0,1);
	addEdge(0,2);
	addEdge(0,3);
	addEdge(1,4);
	addEdge(3,4);
	addEdge(2,4);

	depthFirstSearch();
	return 0;
}


