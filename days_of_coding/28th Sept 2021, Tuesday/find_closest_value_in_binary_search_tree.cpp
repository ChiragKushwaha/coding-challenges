#include <iostream>
#include <cmath>

using namespace std;
// time O(log(n)) worst case O(n)
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int findClosestValueInBSTHelper(node *tree, int target, int closest)
{
    if (tree == NULL)
    {
        return closest;
    }
    if (abs(target - closest))
}

int findClosestValueInBST(node *tree, int target)
{

    return findClosestValueInBSTHelper(tree, target, INT_MAX);
}

int main()
{

    return 0;
}