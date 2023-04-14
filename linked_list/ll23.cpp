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

long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long n = 1000000007;
    long long n1 = 0, n2 = 0;
    while(l1!=NULL){
        n1 = (n1*10)%n + l1->data;
        l1 = l1->next;
    }
    while(l2!=NULL){
        n2 = (n2*10)%n + l2->data;
        l2 = l2->next;
    }
    n1 = n1%n;
    n2 = n2%n;
    long long prod = (n1*n2)%n;
    return prod;
}