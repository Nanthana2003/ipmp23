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

void sum3(struct Node * h1, struct Node * h2, struct Node * h3, int sum){

}

int main(){
    struct Node * h1, *h2, *h3;
    h1 = new Node(12);
    h2 = new Node(23);
    h3 = new Node(90);
    h1->next = new Node(6);
    h2->next = new Node(5);
    h3->next = new Node(20);
    h1->next->next = new Node(29);
    h2->next->next = new Node(8);
    h3->next->next = new Node(59);
    int sum = 101;
    sum3(h1,h2,h3,sum);

    return 0;
}