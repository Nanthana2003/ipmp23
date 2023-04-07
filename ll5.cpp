#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Node*  node(int x){
    struct Node  *h ;
    h->next = NULL;
    h->data = x;
    return h;
}

struct Node * deletenode(int x, struct Node * h){
    struct Node * p, * q;
    p = h;
    if(h->data == x){
        p = h->next;
        h->next = NULL;
        return p;

    }
    while(p->next!=NULL){
        if(p->next->data == x){
            q = p->next;
            p->next = p->next->next;
            q->next = NULL;
            return h;
        }
        p = p->next;
    }
    return h;


}

int main(){
    struct Node * p  = new Node(1), *q, *r;
    r = p;
    for(int i = 2; i<6; i++){
        q = new Node(i);
        r->next = q;
        r = r->next;
    }
    r = p;
    //while(p!=NULL){ cout<<p->data; p  = p->next;}
    bool k = true;
    int i = 0;
    while(k){
        cin>>i;
        if(i == -1) break;
        p = deletenode(i,p);
        q = p;
        while(q!=NULL){cout<<q->data<<endl; q= q->next;}
    }
    

    return 0;
}