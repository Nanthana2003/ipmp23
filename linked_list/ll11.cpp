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

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    unordered_set<int> s;
    struct Node * p1, *p2, *t,*h;
    t = NULL; h = NULL;
    p1 = head1;
    vector<int> v;
    p2 = head2;
    while(p1!=NULL){
        if(s.find(p1->data) == s.end()){
            s.insert(p1->data);
            // if(h == NULL){
            //     h = new Node(p1->data);
            //     t = h;
            // }
            // else{
            //     h->next = new Node(p1->data);
            //     h = h->next;
            // }
            v.push_back(p1->data);
        }
        p1 = p1->next;
    }
    while(p2!=NULL){
        if(s.find(p2->data) == s.end()){
            s.insert(p2->data);
                // h->next = new Node(p2->data);
                // h = h->next;
            v.push_back(p2->data);
        }
        p2 = p2->next;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++){
        if(h == NULL){
            h = new Node(v[i]);
            t = h;
        }
        else{
            h->next = new Node(v[i]);
            h = h->next;
        }
    }
    return t;
}