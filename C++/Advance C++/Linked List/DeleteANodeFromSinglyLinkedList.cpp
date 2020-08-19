#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *tail, *head;
class singly
{
    private:
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

    void delete(struct Node **head_ref, int key){
        struct Node *temp = *head_ref, *prev;
        if(temp != NULL && temp -> data == key){
            *head_ref = temp ->next;
            free(temp);
            return;
        }
        while(temp != NULL && temp -> data != key){
            prev = temp;
            temp = temp -> next;
        }if(temp == NULL) return;
        prev -> next = temp ->next;
        free(temp);
    }
    void deleteComplete(Node **head_ref){
        Node *current = *head_ref;
        Node *next;
        while(current != NULL){
            next = current ->next;
            free(current);
            current = next;
        }
        *head_ref = NULL;
    }
    void display(){
        Node *temp = new Node;
        temp = head;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }


}

int main(){
    singly s1 = singly();
    s1.create(2);
    s1.create(3);
    s1.create(4);
    s1.display();
}