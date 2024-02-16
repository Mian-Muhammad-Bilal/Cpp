#include <iostream>
using namespace std;
class Binary_Tree
{
private:
    class Node
    {
    public:
        int data;
        Node *right;
        Node *left;
        Node()
        {
            left = right = NULL;
        }
        Node(int d)
        {
            data = d;
            left = right = NULL;
        }
    };

    Node *root;

public:
    Binary_Tree()
    {
        root = NULL;
    }
    //=============================================
    bool Empty()
    {
        if (root != NULL)
        {
            return false;
        }
        else
            return true;
    }

    void Insert(int d)
    {
        if (Empty())
        {
            root = new Node(d);
            return;
        }
        Node *temp = root;
        while (1)
        {
            if (d < temp->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = new Node(d);
                    return;
                }
                else
                    temp = temp->left;
            }
            if (d > temp->data)
            {
                if (temp->right == NULL)
                {
                    temp->right = new Node(d);
                    return;
                }
                else
                    temp = temp->right;
            }
        }
    }

    int Size_s(Node *size)
    {
        if (size == NULL)
        {
            return 0;
        }
        else
        {
            return Size_s(size->left) + Size_s(size->right) + 1;
        }
    }

    void size()
    {
        Node *n = root;
        cout << "Total no. of nodes in tree is: " << Size_s(n) << endl;
    }

    void PreOrder(Node *tree)
    {
        if (tree != NULL)
        {
            cout << tree->data;
            PreOrder(tree->left);
            PreOrder(tree->right);
        }
    }

    void InOrder(Node *tree)
    {
        if (tree != NULL)
        {
            InOrder(tree->left);
            cout << tree->data;
            InOrder(tree->right);
        }
    }

    void PostOrder(Node *tree)
    {
        if (tree != NULL)
        {
            PostOrder(tree->left);
            PostOrder(tree->right);
            cout << tree->data;
        }
    }

    void Root()
    {
        cout << "Root is: " << root->data << endl;
    }

    void MAX()
    {
        Node *t = root;
        if (t != NULL)
        {
            while (t->right != NULL)
            {
                t = t->right;
            }
            cout << "The Maximum is: " << t->data << endl;
        }
    }

    void MIN()
    {
        Node *t = root;
        if (t != NULL)
        {
            while (t->left != NULL)
            {
                t = t->left;
            }
            cout << "The Minimum is: " << t->data << endl;
        }
    }

    void Parent(int n)
    {
        Node *temp = root;
        if (temp != NULL)
        {
            if (temp->data == n)
            {
                cout << n << " is the root node so it do not have any parent.";
                return;
            }
            if (n < temp->data)
            {
                while (temp->left->data == n)
                {
                    temp = temp->left;
                }
                cout << "The parent of " << n << " is :" << temp->data;
                return;
            }
            if (n > temp->data)
            {
                while (temp->right->data == n)
                {
                    temp = temp->right;
                }
                cout << "The parent of " << n << " is :" << temp->data;
                return;
            }
        }
    }
    // void Delete(int d)
    // {
    //     Node *temp = root;
    //     if (root == NULL)
    //         return;
    //     if (temp->data == d)
    //     {
    //     }
    // }
    void Display()
    {
        Node *temp = root;
        cout << "   Displaying...tree";
        cout << "\nPrinting tree in PreOrder\n";
        PreOrder(temp);
        cout << "\nPrinting tree in InOrder\n";
        InOrder(temp);
        cout << "\nPrinting tree in PostOrder\n";
        PostOrder(temp);
        cout << endl;
    }
};

int main()
{
    Binary_Tree t;
    t.Insert(1);
    t.Insert(2);
    t.Insert(3);
    t.Insert(4);
    t.Insert(5);
    t.Insert(6);
    t.Insert(7);
    t.Display();
    // t.PreOrder();
    // t.PostOrder();
    // t.InOrder();
    return 0;
}