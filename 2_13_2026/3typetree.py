class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def inOrderTraversal(node):
    if node is None:
        return
    inOrderTraversal(node.left)
    print(node.data, end=", ")
    inOrderTraversal(node.right)
    
def postOrderTraversal(node):
    if node is None:
        return
    postOrderTraversal(node.left)
    postOrderTraversal(node.right)
    print(node.data, end=", ")
    
def preOrderTraversal(node):
    if node is None:
        return
    print(node.data, end=", ")
    preOrderTraversal(node.left)
    preOrderTraversal(node.right)

root = TreeNode('Pond1')
node2 = TreeNode('Pond2')
node3 = TreeNode('Pond3')
node4 = TreeNode('Pond4')
node5 = TreeNode('Pond5')
node6 = TreeNode('Pond6')
node7 = TreeNode('Pond7')
node8 = TreeNode('Pond8')
node9 = TreeNode('Pond9')
node10 = TreeNode('Pond10')


root.left = node2
root.right = node3

node2.left = node4
node2.right = node5

node3.left = node6
node3.right = node7

node4.left = node8
node4.right = node9

node5.left = node10

# Traverse
print("\nInOrder\n")
inOrderTraversal(root)
print("\n")
print("\nPostOrder\n")
postOrderTraversal(root)
print("\n")
print("\nPreOrder\n")
preOrderTraversal(root)

#Python
