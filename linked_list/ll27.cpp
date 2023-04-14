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

void swap(struct Node *h){
    int temp;
    struct Node *p, *q, *r;
    if(h->data%2 == 0){
        temp = 1;
    }
    else temp = 2;
    p = h;
    q = h->next;
    while(p!=NULL && p->next!=NULL){
        if(temp = 1){

        }
        else{
            if(p->data%2 != 0 && q->data%2 == 0){
                p = q->next;
                q = q->next->next;
            }
            else{
                
            }
        }
    }
}

int main(){
    struct Node * h1, *h2;
    h1 = new Node(5);
    h1->next = new Node(6);
    h1->next->next = new Node(3);
    h1->next->next->next = new Node(1);
    return 0;
}