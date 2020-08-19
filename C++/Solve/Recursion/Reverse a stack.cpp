#include<iostream>
#include<stack>
using namespace std;
void insert(stack <int> & stack, int ele) {
    if (stack.empty()) {
        stack.push(ele);
        return;
    }
    int val = stack.top();
    stack.pop();
    insert(stack, ele);
    stack.push(val);
    return;
}
void reverse(stack<int>& stack) {
    if (stack.size() == 1) {
        return;
    }
    int val = stack.top();
    stack.pop();
    reverse(stack);
    insert(stack, val);
    return;

}

int main() {
    stack<int> stack;
    stack.push(10);
    stack.push(60);
    stack.push(4);
    stack.push(7);
    stack.push(15);
    stack.push(1);
    cout<<"Before : ";
    while (!stack.empty()) {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    cout<<endl;
    stack.push(10);
    stack.push(60);
    stack.push(4);
    stack.push(7);
    stack.push(15);
    stack.push(1);
    reverse(stack);
    cout<<"After : ";
    while (!stack.empty()) {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    cout<<endl;
    return 0;
}