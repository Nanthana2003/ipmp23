#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


struct Node* reverseList(struct Node *head)
    {
        struct Node *cur, *prev, *nextn;
        prev = NULL;
        cur = head;
        nextn = cur->next;
        cur->next = NULL;
        while(nextn!=NULL){
            prev = cur;
            cur = nextn;
            nextn = nextn->next;
            cur->next = prev;
        }
        cur->next = prev;
        return cur;
    }
    bool isPalindrome(Node *head)
    {
        struct Node * p, *nn;
        int l = 0;
        p = head;
        while(p!=NULL){
            p = p->next;
            l++;
        }
        if(l == 1) return true;
        int k = l/2, q = 1;
        p = head;
        while(q<k){
            p = p->next;
            q++;
        }
        if(l%2 == 0) p = p->next;
        else p = p->next->next;
        nn = reverseList(p);
        p = head;
        while(nn!=NULL){
            if(nn->data != p->data) return false;
            nn = nn->next;
            p = p->next;
        }
        return true;
    }