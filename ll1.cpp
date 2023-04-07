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


//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       Node * h;
       h = head;
       int len = 0;
       while(h!=NULL){
           h = h->next;
           len++;
       }
       int k = len-n+1;
       if(k<=0) return -1;
       int p = -1;
       h = head;
       int l = 1;
       while(h!=NULL && l<=k){
           if(l == k){
               p = h->data;
               break;
           }
           h = h->next;
           l++;
       }
       return p;
}

int main(){


    return 0;
}