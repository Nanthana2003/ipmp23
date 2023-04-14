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

Node* rotate(Node* head, int k)
    {
        int l = 0;
        struct Node * p, *q;
        p = head;
        while(p->next!=NULL){
            l++;
            p = p->next;
        }
        l++;
        int a ;
        a = k+1;
        p->next = head;
        int t = 1;
        while(t<a){
            t++;
            p = p->next;
            
        }
        
        q = p->next;
        p->next = NULL;
        return q;
    }