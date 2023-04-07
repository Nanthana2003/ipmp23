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

Node* findIntersection(Node* head1, Node* head2)
{
    unordered_set<int> s;
    struct Node * p1, *p2, *h, *k, *t;
    h = NULL;
    t = NULL;
    //t = h;
    int l1 = 0, l2 = 0;
    p1 = head1; p2 = head2;
    while(p1!=NULL && p2 != NULL){
        if(p1->data == p2->data){
            l1 = p1->data;
            k = new Node(p1->data);
            if(h == NULL) {h = k; t = h;}
            else {
                h->next = k;
                h = h->next;
            }
            p1 = p1->next;
            p2 = p2->next;
            //while(p1!=NULL && p1->data == l1) p1 = p1->next;
            //while(p2!=NULL && p2->data == l1) p2 = p2->next;
        }
        else{
            if(p1->data>p2->data) p2 = p2->next;
            else p1 = p1->next;
        }
    }
    return t;
}