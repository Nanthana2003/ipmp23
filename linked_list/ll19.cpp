#include<iostream>
#include<unordered_set>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

struct Node* arrange(Node *head)
{
    unordered_set<char> vow, cons;
    char a = 97;
    while(a<=122){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
            vow.insert(a);
        }
        else{
            cons.insert(a);
        }
        a = a+1;
    }
    Node * p, * q, * r;
        p = head;
        char temp;
        int l = 0;
        bool flag = false;
        while(p->next!=NULL){
            p = p->next;
            l++;
        }
        l++;
        int k = 0;
        q = head;
        if(cons.find(q->data)!=cons.end()){
            p->next = new Node(q->data);
            p = p->next;
            flag = true;
        }
        while(q->next!=NULL && k<l-1){
            if(cons.find(q->next->data)!=cons.end()){
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