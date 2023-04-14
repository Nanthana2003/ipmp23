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

Node* sortedMerge(Node* head1, Node* head2)  
{  
    struct Node * p1, *p2, *res, *h;
    p1 = head1; p2 = head2;
    int k, l = -1;
    h = NULL;
    while(p1!=NULL && p2 != NULL){
        l = -1;
        if(p1->data == p2->data){
            k = p1->data;
            l = k;
            p1 = p1->next;
            p2 = p2->next;
        }
        else if(p1->data<p2->data){
            k = p1->data;
            p1 = p1->next;
        }
        else{
            k = p2->data;
            p2 = p2->next;
        }
        if(h == NULL){
            h = new Node(k);
            res = h;
            if(l!=-1){
                h->next = new Node(l);
                h = h->next;
            }
        }
        else{
            h->next = new Node(k);
            h  = h->next;
            if(l!=-1){
                h->next = new Node(l);
                h = h->next;
            }
        }
    }
    while(p1!=NULL){
        h->next = new Node(p1->data); p1 = p1->next;
        h = h->next;
    }
    while(p2!=NULL){
        h->next = new Node(p2->data); p2 = p2->next;
        h = h->next;
    }
    return res;
} 