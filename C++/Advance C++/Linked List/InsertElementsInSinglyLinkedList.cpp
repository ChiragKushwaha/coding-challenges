#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class singly
{
    private:
    Node *tail, *head;
    public:
    singly(){
        head = NULL;
        tail = NULL;
    }
    void create(int value){
        Node *temp = new Node;
        temp -> data = value;
        temp -> next = NULL;
        if(head == NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        }else{
            tail ->next = temp;
            tail = temp;
        }
    }

    void display(){
        Node *temp = new Node;
        temp = head;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

    void insert_start(int value){
        Node *temp = new Node;
        temp ->data = value;
        temp -> next = head;
        head = temp;
    }

    void insert_pos(int pos, int value){
        Node * prev = new Node;
        Node *curr = new Node;
        Node * temp = new Node;
        curr = head;
        for(int i = 1;i<pos;i++){
            prev = curr;
            curr = curr->next;
        }
        temp -> data = value;
        prev -> next = temp;
        temp ->next = curr;
    }
}

int main(){
    singly s1 = singly();
    s1.create(2);
    s1.create(3);
    s1.insert_start(5);
    s1.insert_pos(2,5);
    s1.create(4);
    s1.display();
}