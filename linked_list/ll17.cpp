#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* segregate(Node *head) {
        Node * p, *q, *r;
        int temp;
        p = head;
        q = head->next;
        while(q!=NULL){
            if(p == q){
                q = q->next;
                continue;
            }
            if(q->data==0){
                if(p->data!=0){
                    temp = p->data;
                    p->data = q->data;
                    q->data = temp;
                    p = p->next;
                    q = q->next;
                }
                else{
                    p = p->next;
                }
                
            }
            else{
                q = q->next;
            }
        }
        p = head;
        q = head->next;
        while(q!=NULL){
            if(p == q){
                q = q->next;
                continue;
            }
            if(p->data == 2){
                if(q->data!=2){
                    temp = p->data;
                    p->data = q->data;
                    q->data = temp;
                    p = p->next;
                    q = q->next;
                }
                else{
                    q = q->next;
                }
            }
            else{
                p = p->next;
            }
        }
        return head;
        
        
    }