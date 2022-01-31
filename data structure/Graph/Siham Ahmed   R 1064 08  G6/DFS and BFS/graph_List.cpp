#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#define max 100

using namespace std;


class Graph{
private:
	struct node
	{
		string data;
		node* next;
	};
	struct node* adjList[max];
	bool visitedBFS[max];
	bool visitedDFS[max];
	stack<string> stackk;
	queue<string> queuee;
	int index;
	int getIndex(string ch){
		for (int i = 0; i < index; ++i) {
			if (ch == adjList[i]->data) {
				return i;
			}
		}
		return -1;
	}
public:
	Graph(){
		index = 0;
		for (int j = 0; j < max; ++j) {
			adjList[j] = NULL;
			visitedBFS[j] =false;
			visitedDFS[j] =false;
		}
	}
	void putVertex(string ch){
		node *t = new node;
		t->data = ch;
		t->next =NULL;
		adjList[index] = t;
		index++;
	}
	void putEdge(string ch1, string ch2){

		int i1 = getIndex(ch1);
		struct node *temp1, *t1 = new node;
		t1->data = ch2;
		t1->next =NULL;
		temp1 = adjList[i1];
		while(temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = t1;

		int i2 = getIndex(ch2);
		struct node *t2 = new node,*temp2;
		t2->data = ch1;
		t2->next =NULL;
		temp2 = adjList[i2];
		while(temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = t2;
	}
	void adjLDFS(string ch){
		int i = getIndex(ch);
		cout<<ch<<" ";
		visitedDFS[i] = true;
		struct node *temp = adjList[i];
		while(temp != NULL){
			stackk.push(temp->data);
			temp = temp->next;
		}
		while(!stackk.empty()){
			int j = getIndex(stackk.top());
			if(visitedDFS[j])stackk.pop();
			else adjLDFS(stackk.top());
		}
	}
	void adjLBFS(string ch){
		int i = getIndex(ch);
		cout<<ch<<" ";
		visitedBFS[i] = true;
		struct node *temp = adjList[i];
		while(temp != NULL){
			queuee.push(temp->data);
			temp = temp->next;
		}
		while(!queuee.empty()){
			int j = getIndex(queuee.front());
			if(visitedBFS[j])queuee.pop();
			else adjLBFS(queuee.front());
		}
	}
	void deleteV(string ch){
        int i = getIndex(ch);
        node*temp = adjList[i]->next;
        while(temp != NULL)
        {
            int j=getIndex(temp->data);
             node*temp1 = adjList[j],*cur;
             while(temp1 != NULL)
             {
                 if(temp1->next->data==ch)
                    break;
                 temp1 = temp1->next;
             }
             cur = temp1->next;
             temp1->next = cur->next;
             delete(cur);
             temp = temp->next;
        }
        node*tem = adjList[i],*t;
        while(tem != NULL)
        {
            t=tem;tem=tem->next;
            delete(t);
        }
        for(int j=i;j<index;++j)
            adjList[j]=adjList[j+1];
        index--;
	}
	void deleteE(string ch1, string ch2){
        int i1 = getIndex(ch1);
        int i2 = getIndex(ch2);
        node* temp = adjList[i1],*prev;
        while(temp != NULL)
        {
            if(temp->next->data==ch2)
                break;
            temp = temp->next;
        }
        prev = temp;
        temp = temp->next;
        prev->next = temp->next;
        temp =NULL;
        delete(temp);

        node* temp1 = adjList[i2],*prev1;
        while(temp1 != NULL)
        {
            if(temp1->next->data==ch1)
                break;
            temp1 = temp1->next;
        }
        prev1 = temp1;
        temp1 = temp1->next;
        prev1->next = temp1->next;
        delete(temp1);
	}
};
int main()
{
	Graph graph;
		    graph.putVertex("a");
		    graph.putVertex("b");
		    graph.putVertex("c");
		    graph.putVertex("d");
		    graph.putVertex("e");
		    graph.putVertex("f");
		    graph.putVertex("g");
		    graph.putVertex("h");
		    graph.putEdge("a","b");
		    graph.putEdge("a","d");
		    graph.putEdge("a","h");
		    graph.putEdge("b","c");
		    graph.putEdge("b","g");
		    graph.putEdge("c","d");
		    graph.putEdge("c","e");
		    graph.putEdge("e","d");
		    graph.putEdge("e","f");
		    graph.deleteV("c");
		    graph.deleteE("a","b");
		    cout<<endl<<"DFS => :";
		    graph.adjLDFS("a");
		    cout<<endl<<"BFS => :";
		    graph.adjLBFS("a");

}


