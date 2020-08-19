#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int>&stack, int val) {
    if (stack.empty() || stack.top()>=val) {
        stack.push(val);
        return;
    }
    int sval = stack.top();
    stack.pop();
    insert(stack, val);
    stack.push(sval);
}
void sortStack(stack<int>& stack) {
    if (stack.size() == 1) {
        return;
    }
    int val = stack.top();
    stack.pop();
    sortStack(stack);
    insert(stack, val);

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
    sortStack(stack);
    cout<<"After : ";
    while (!stack.empty()) {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    cout<<endl;
    return 0;
}