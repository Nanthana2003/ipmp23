#include<iostream>
#include<unordered_set>
#include<algorithm>
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

struct Node * reverse (struct Node *head, int k)
    { 
        struct Node * p,*q,*cur,*prev,*nn, *start;
        int u = 0;
        p = head;
        int i = 0;
        q = NULL;
        while(p!=NULL){
            int l = 1;
            cur = p;
            nn = cur->next;
            while(l<k && nn!=NULL){
                prev = cur;
                cur = nn;
                nn = nn->next;
                cur->next = prev;
                l++;
            }
            p->next = nn;
            p = nn;
            l = 1;
            u = 1;
            while(l<k && p!=NULL){
                p = p->next;
                l++;
            }
            
            if(q!=NULL) {q->next = cur;}
            if(i == 0){
                start = cur; i++;
                
            }
            
            if(p!=NULL){
               u = 0;
            q = p;
            p = p->next;
            }
        }
        if(u == 0)
        q->next = NULL;
        
        return start;
    }

int main(){
    struct Node * p ;
    p = new Node(1);
    p->next = new Node(2);
    p->next->next = new Node(3);
    p->next->next->next = new Node(4);
    p->next->next->next->next = new Node(5);
    p->next->next->next->next->next = new Node(6);
    p->next->next->next->next->next->next = new Node(7);
    p->next->next->next->next->next->next->next = new Node(8);
    p->next->next->next->next->next->next->next->next = new Node(9);
    p = reverse(p,3);
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->next;
    }
    

    return 0;
}