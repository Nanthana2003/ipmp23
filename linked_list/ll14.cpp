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

struct Node *reverse (struct Node *head, int k)
    { 
        struct Node * p,*q,*cur,*prev,*nn, *start;
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
            if(q!=NULL) q->next = cur;
            if(i == 0){
                start = cur; i++;
            }
            q = p;
            p = nn;
            
        }
        q->next = NULL;
        return start;
    }