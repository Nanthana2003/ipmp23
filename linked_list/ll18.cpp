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

Node* divide(int N, Node *head){
        Node * p, * q, * r;
        p = head;
        int temp;
        int l = 0;
        bool flag = false;
        while(p->next!=NULL){
            p = p->next;
            l++;
        }
        l++;
        int k = 0;
        q = head;
        if(q->data%2 != 0){
            p->next = new Node(q->data);
            p = p->next;
            flag = true;
        }
        while(q->next!=NULL && k<l-1){
            if(q->next->data%2 !=0){
                p->next = new Node(q->next->data);
                p = p->next;
                r = q->next;
                q->next = q->next->next;
                r->next = NULL;
                
                
            }
            else{
                q = q->next;
            }
            k++;
            
        }
        if(flag == true){
            head = head->next;
        }
        return head;
        
    }