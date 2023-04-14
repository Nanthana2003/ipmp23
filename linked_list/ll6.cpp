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

bool detectLoop(Node* head){
        unordered_set<struct Node *> m;
        struct Node * p;
        p = head;
        while(p != NULL){
            if(m.find(p) == m.end()){
                m.insert(p);
            }
            else return true;
            p = p->next;
        }
        return false;
    }

    