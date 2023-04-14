#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};



class Solution{
    public:
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
    
};

int main(){


    return 0;
}