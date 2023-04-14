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

void removeLoop(Node* head)
    {
        if(head == NULL) return ;
        struct Node * p;
        unordered_set<struct Node*> m;
        p = head;
        m.insert(p);
        while(p->next!=NULL){
            if(m.find(p->next) == m.end()){
                m.insert(p->next);
            }
            else {p->next = NULL;return ;}
            p = p->next;
        }
    }