#include <iostream> 
using namespace std; 

struct node 
{ 
    int data; 
    struct node* left, *right; 
}; 

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left= temp->right = NULL;
    return temp;
};

void inOrder(struct node *root){
    if (root != NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
    
}

struct node* insert(struct node* node, int data){
    if(node == NULL) return newNode(data);
    if(data< node->data) node->left = insert(node->left, data);
    else if(data > node->data) node->right = insert(node->right, data);
    return node;
}

struct node* search(struct node* root, int data) 
{ 
    if (root == NULL || root->data == data) return root; 
    if (root->data < data) return search(root->right, data); 
    return search(root->left, data); 
} 

int main(){
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inOrder(root);
    if(search(root, 90) != NULL)
        cout<<"\nFOUND"<<endl;
    else cout<<"\nNOT FOUND"<<endl;
    return 0;
}