#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
struct Node
{
    int data;
    Node *children[];
};

void dfs(Node *head) // time O(V+E) | space O(v)
{
    if (head == NULL)
    {
        return;
    }

    cout << "head" << endl; // add the element to the array
    for (Node *child : head->children)
    {
        dfs(child);
    }
}
