#include<iostream>
#include<stack>
using namespace std;

void deleteMiddleElement(stack<int>& stack, int k) {
    if (k == 1) {
        stack.pop();
        return;
    }
    int val = stack.top();
    stack.pop();
    deleteMiddleElement(stack, k-1);
    stack.push(val);

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
    int k = (stack.size()/2)+1;
    cout<<k;
    deleteMiddleElement(stack, k);
    cout<<"After : ";
    while (!stack.empty()) {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    cout<<endl;
    return 0;
}