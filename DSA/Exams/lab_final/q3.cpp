#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

class BinaryTree
{
public:
    Node *root;

    BinaryTree()
    {
        root = NULL;
    }

    void preOrder(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        cout << node->data << "-";
        preOrder(node->left);
        preOrder(node->right);
    }

    void inOrder(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        inOrder(node->left);
        cout << node->data << "-";
        inOrder(node->right);
    }

    void postOrder(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << "-";
    }

    void createTree()
    {
        root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right->left = new Node(6);
        root->right->right = new Node(7);
    }
};

int main()
{
    BinaryTree tree;
    tree.createTree();
    cout << "Pre-order traversal: ";
    tree.preOrder(tree.root);
    cout << endl;
    cout << "In-order traversal: ";
    tree.inOrder(tree.root);
    cout << endl;
    cout << "Post-order traversal: ";
    tree.postOrder(tree.root);
    cout << endl;
    return 0;
}
