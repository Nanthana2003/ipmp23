#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node * q;

struct Node * node(int x){
    struct Node * h;
    h->next = NULL;
    h->data = x;
}


    void reverse(struct Node * head, struct Node * prev){
    if(head!=NULL){
    struct Node  *cur, *nextn;
    cur = head;
    nextn = head->next;
    cur->next = prev;
    q = cur;
    reverse(nextn, cur);
    }
    }
    struct Node* reverseList(struct Node *head)
    {
        q = head;
        reverse(head, NULL);
        head = q;
        return head;
    }
    


int main(){
    struct Node * p  = NULL;
    p = node(1);
    cout<<p->data<<endl;
    p->next = node(2);
    p->next->next = node(3);
    p->next->next->next = node(4);
    p->next->next->next->next = node(5);\
    cout<<p->data<<endl;
    reverseList(p);
    cout<<p->data<<endl;
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->next;
    }
    

    return 0;
}