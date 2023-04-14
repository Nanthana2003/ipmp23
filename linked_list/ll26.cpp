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

void linkdelete(struct Node  *head, int M, int N)
    {
        int i = 0;
        struct Node *p, *q;
        p = head;
        int j = 0;
        while(p!=NULL){
            i++;
            if(i == M){
                q = p->next;
                while(q!=NULL && j<N){
                    q = q->next;
                    j++;
                }
                p->next = q;
                i = 0;
                j = 0;
            }
            p = p->next;
        }
    }