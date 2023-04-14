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

int getMiddle(Node *head)
    {
        
        struct Node * p;
        p = head;
        int l = 0; 
        while(p!=NULL){
            l++;
            p = p->next;
        }
        if(l == 1) return head->data;
        int k = l/2;
        int m, q = 1;
        p = head;
        while(q<k){
            p = p->next;
            q++;
        }
        p = p->next;
        return p->data;
    }