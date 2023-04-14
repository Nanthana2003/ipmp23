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

struct Node* reverseList(struct Node *head)
    {
        struct Node *cur, *prev, *nextn;
        prev = NULL;
        cur = head;
        nextn = cur->next;
        cur->next = NULL;
        while(nextn!=NULL){
            prev = cur;
            cur = nextn;
            nextn = nextn->next;
            cur->next = prev;
        }
        cur->next = prev;
        return cur;
    }

void sum(struct Node *h1, struct Node *h2){
    struct Node *p, *q, *r, *res;
    r = NULL;
    p = reverseList(h1);
    q = reverseList(h2);
    int s, c= 0;

    while(p!=NULL || q!=NULL){
        if(p == NULL){
            s = q->data+c;
            c = s/10;
            s = s%10;
            q = q->next;
        }
        else if(q == NULL){
            s = p->data+c;
            c = s/10;
            s = s%10;
            p = p->next;
        }
        else{
            s = q->data+p->data+c;
            c = s/10;
            s = s%10;
            q = q->next;
            p = p->next;
        }
        if(r == NULL) {
            r = new Node(s);
            res = r;
        }
        else{
            r->next = new Node(s);
            r = r->next;
        }

    }
    if(c!=0) r->next = new Node(c);
    res = reverseList(res);
    while(res!=NULL){
        cout<<res->data<<" ";
        res = res->next;
    }
}

int main(){
    struct Node * h1, *h2;
    h1 = new Node(5);
    h2 = new Node(8);
    h1->next = new Node(6);
    h2->next = new Node(4);
    h1->next->next = new Node(3);
    h2->next->next = new Node(2);
    h1->next->next->next = new Node(1);
    sum(h1,h2);

    return 0;
}