#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void alternatingSplitList(struct Node* head) 
{
    struct Node * p, *q, *r, *t, *s;
    p = NULL;
    q = NULL;
    int j = 0, i = 1;
    r = head;
    int k = 0;
    while(r!=NULL){
        i++;
        if(p == NULL){
            p = r;
            s = p;
            r = r->next;
            continue;
        }
        else if(q == NULL){
            q = r;
            t = q;
            r = r->next;
            continue;
        }
        if(i%2 == 0){
            p->next = new Node(r->data);
            p = p->next;
        }
        else{
            q->next = new Node(r->data);
            q = q->next;
        }
        r = r->next;

    }
    while(s!=NULL){
        cout<<s->data<<" ";
        s = s->next;
    }
    cout<<endl;
    while(t!=NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
}