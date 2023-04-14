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

void pairWiseSwap(struct Node* head) 
    {
        struct Node *p, *q, *r;
        p = head;
        int temp;
        while(p!=NULL && p->next!=NULL){
            temp = p->data;
            p->data = p->next->data;
            p->next->data = temp;
            p = p->next->next;
        }
        while(head!=NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
    }

int main(){
    struct Node * h1, *h2;
    h1 = new Node(5);
    h1->next = new Node(6);
    h1->next->next = new Node(3);
    h1->next->next->next = new Node(1);
    pairWiseSwap(h1);
    return 0;
}