#include <iostream>
using namespace std;
struct Node{
int data;
struct Node *left;
struct Node *right;
};
class AVLTree{
private:
   struct Node *root;
public:
    AVLTree(){root=NULL;}
    void LL(struct Node *&r){
        struct Node *temp=r;
        r=r->left;
        temp->left=r->right;
        r->right=temp;
    }
     void RR(struct Node *&r){
        struct Node *temp=r;
        r=r->right;
        temp->right=r->left;
        r->left=temp;
    }
     void LR(struct Node *&r){
        struct Node *temp=r->left->right;
        r->left->right=temp->left;
        temp->left=r->left;
        temp->right=r;
        r=temp;
    }
     void RL(struct Node *&r){
        struct Node *temp=r->right->left;
        r->right->left=temp->right;
        temp->right=r->right;
        temp->left=r;
        r=temp;
    }
     int height(struct Node *&r){
       if(r==NULL) return 0;
        int hl=1+height(r->left);
        int hr=1+height(r->right);
        if(hl>hr) return hl;
        return hr;
    }
    int balancefactor(struct Node *&r){
       if(r==NULL) return 0;
        return height(r->left)-height(r->right);

    }
    void insert(int key){

    insert(root, key);

    }
    void insert(struct Node *&r,int key){
    if(r==NULL){
        r=new Node;
        r->data=key;
        r->left=NULL;
        r->right=NULL;
    }
    else if(r->data>key){
        insert(r->left,key);
        int bf=balancefactor(r);
        if(bf==2){
            if(key<r->left->data) LL(r);
            else LR(r);
        }
    }
    else if(r->data<key){
        insert(r->right,key);
        int bf=balancefactor(r);
        if(bf==-2){
            if(key>r->right->data) RR(r);
            else RL(r);
        }
    }
    }
    void preorder(){
        preorder(root);
    }
     void preorder(struct Node *&r){
       if(r==NULL) return;
       cout<<"(";
       cout<<r->data<<" ";
       preorder(r->left);
       preorder(r->right);
       cout<<")";
    }



};

int main()
{
    AVLTree t;
    t.insert(8);t.insert(5);t.insert(14);
    t.insert(2);t.insert(7); t.insert(10);
    //t.insert(15);t.insert(5);t.insert(14);
    t.insert(15);t.insert(1); t.insert(0);
    t.preorder();
    return 0;
}
