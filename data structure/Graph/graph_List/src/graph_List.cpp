#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
#define maxx 100

class graph{
private:
	struct node
	{
		string data;
		node* next;
	};
	struct node* adjacencylist[maxx];
	bool breathVisit[maxx];
	bool depthVisit[maxx] ;

	stack<string> stackk;
	queue<string> queuee;
	int index;
	int searchVertex(string ch){
		for (int i = 0; i < index; ++i) {
			if (ch == adjacencylist[i]->data) {
				return i;
			}
		}
		return -1;
	}
public:
	graph(){
		index = 0;
		for (unsigned int j = 0; j < maxx; ++j) {
			adjacencylist[j] = NULL;
			breathVisit[j] =false;
			depthVisit[j] =false;
		}
	}
	void insertVertex(string ch){
		node *t = new node;
		t->data = ch;
		t->next =NULL;
		adjacencylist[index] = t;
		index++;
	}
	void putEdge(string v1, string v2){

		int i1 = searchVertex(v1);
		struct node *temp1, *t1 = new node;
		t1->data = v2;
		t1->next =NULL;
		temp1 = adjacencylist[i1];
		while(temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = t1;

		int i2 = searchVertex(v2);
		struct node *t2 = new node,*temp2;
		t2->data = v1;
		t2->next =NULL;
		temp2 = adjacencylist[i2];
		while(temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = t2;
	}
	void diplay(){
	    cout<<"adjacency list --------------------\n";
		for (int i = 0; i < index; ++i) {
			node *temp = adjacencylist[i];
			while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
			}
			cout<<endl;
		}
	}
	void adjLDFS(string ch){
		int i = searchVertex(ch);
		cout<<ch<<" ";
		depthVisit[i] = true;
		struct node *temp = adjacencylist[i];
		while(temp != NULL){
			stackk.push(temp->data);
			temp = temp->next;
		}
		while(!stackk.empty()){
			int j = searchVertex(stackk.top());
			if(depthVisit[j])stackk.pop();
			else adjLDFS(stackk.top());
		}
	}
	void adjLBFS(string ch){
		int i = searchVertex(ch);
		cout<<ch<<" ";
		breathVisit[i] = true;
		struct node *temp = adjacencylist[i];
		while(temp != NULL){
			queuee.push(temp->data);
			temp = temp->next;
		}
		while(!queuee.empty()){
			int j = searchVertex(queuee.front());
			if(breathVisit[j])queuee.pop();
			else adjLBFS(queuee.front());
		}
	}
	void deleteV(string ch){
        int i = searchVertex(ch);
        node*temp = adjacencylist[i]->next;
        while(temp != NULL)
        {
            int j=searchVertex(temp->data);
             node*temp1 = adjacencylist[j],*cur;
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
        node*tem = adjacencylist[i],*t;
        while(tem != NULL)
        {
            t=tem;tem=tem->next;
            delete(t);
        }
        for(int j=i;j<index;++j)
            adjacencylist[j]=adjacencylist[j+1];
        index--;
	}
	void deleteE(string v1, string v2){
        int i1 = searchVertex(v1);
        int i2 = searchVertex(v2);
        node* temp = adjacencylist[i1],*prev;
        while(temp != NULL)
        {
            if(temp->next->data==v2)
                break;
            temp = temp->next;
        }
        prev = temp;
        temp = temp->next;
        prev->next = temp->next;
        temp =NULL;
        delete(temp);

        node* temp1 = adjacencylist[i2],*prev1;
        while(temp1 != NULL)
        {
            if(temp1->next->data==v1)
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
	graph g;
		    g.insertVertex("a");
		    g.insertVertex("b");
		    g.insertVertex("c");
		    g.insertVertex("d");
		    g.insertVertex("e");
		    g.insertVertex("f");
		    g.insertVertex("g");
		    g.insertVertex("h");

		    g.putEdge("a","b");
		    g.putEdge("a","d");
		    g.putEdge("a","h");
		    g.putEdge("b","c");
		    g.putEdge("b","g");
		    g.putEdge("c","d");
		    g.putEdge("c","e");
		    g.putEdge("e","d");
		    g.putEdge("e","f");

		    g.deleteV("c");
		    g.deleteE("a","b");
		    g.diplay();
		    cout<<endl<<"DFS => :";
		    g.adjLDFS("a");
		    cout<<endl<<"BFS => :";
		    g.adjLBFS("a");

}


