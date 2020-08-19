# O(n) time | O(n) space
# def invertBinaryTree(tree):
#     queue = [tree]
#     while len(queue):
#         current = queue.pop(0)
#         if current is None:
#             continue
#         swapLeftAndRight(current)
#         queue.append(current.left)
#         queue.append(current.right)
#
# def swapLeftAndRight(tree):
#     tree.left, tree.right = tree.right, tree.left

# O(n) time | O(d) space where d is the depth of the tree
def invertBinaryTree(tree):
    if tree is None:
        swapLeftAndRight(tree)
        invertBinaryTree(tree.left)
        invertBinaryTree(tree.right)

def swapLeftAndRight(tree):
    tree.left, tree.right = tree.right, tree.left
