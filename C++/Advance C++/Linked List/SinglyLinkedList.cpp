#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};

int main(){
    Node * p;
    p = new Node;
    p -> data = 10;
    p -> next = NULL;
    cout<<p->data<<endl;
    cout<<p-> next<<endl;

    Node *q;
    q = new Node;
    q -> data = 20;
    q -> next = NULL;    
    //connection
    p->next = q;
    cout<< p->next->data<<endl;
}