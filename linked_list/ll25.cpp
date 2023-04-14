#include<iostream>
#include<unordered_set>
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

void swapk(Node * h, int k){
    int l = 0;
    Node *p, *q, *r;
    p  = h;
    while(p!=NULL){
        l++;
        p = p->next;
    }
    int m = l-k+1;
    p = h;
    int i = 0;
    while(p!=NULL){
        i++;
        if(i == k){
            q = p;
        }
        if(i == m){
            r = p;
        }
        p = p->next;
    }
    int temp = q->data;
    q->data = r->data;
    r->data = temp;
    while(h!=NULL){
        cout<<h->data<<" ";
        h = h->next;
    }


}


int main(){
    struct Node * h1, *h2;
    h1 = new Node(5);
    h1->next = new Node(6);
    h1->next->next = new Node(3);
    h1->next->next->next = new Node(1);
    int k = 2;
    swapk(h1,k);
    return 0;
}