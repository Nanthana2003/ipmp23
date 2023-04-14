#include<iostream>
#include<unordered_map>
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

int intersectPoint(Node* head1, Node* head2)
{
    struct Node *p1, *p2;
    p1 = head1; p2 = head2;
    unordered_map<struct Node *, bool> s;
    while(p1->next != NULL){
        p1 = p1->next;
    }
    p1->next = head1;
    while(p2!=NULL){
        if(s[p2] == true) return p2->data;
        else s[p2] = true;
        p2 = p2->next;
    }
    return -1;
}