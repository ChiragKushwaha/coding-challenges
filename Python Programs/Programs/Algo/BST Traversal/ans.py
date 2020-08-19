# O(n) time | O(n) space
def inOrderTraversal(tree, array):
    if tree is not None:
        inOrderTraversal(tree.left, array)
        array.append(tree.value)
        inOrderTraversal(tree.right, array)
    return array

# O(n) time | O(n) space
def preOrderTraversal(tree, array):
    if tree is not None:
        array.append(tree.value)
        preOrderTraversal(tree.left, array)
        preOrderTraversal(tree.right, array)
    return array

# O(n) time | O(n) space
def postOrderTraversal(tree, array):
    if tree is not None:
        postOrderTraversal(tree.left, array)
        postOrderTraversal(tree.right, array)
        array.append(tree.value)
    return array
