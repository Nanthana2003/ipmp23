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

void deleteAlt(struct Node *head){
    int i = 0;
    struct Node * p, * q;
    p = head;
    while(p!=NULL && p->next!=NULL){
            q = p->next;
            p->next = p->next->next;
            q->next = NULL;
            p = p->next;
    }
}