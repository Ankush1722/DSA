#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *insert(node *root, int data)
{
    node *newnode = new node(data);
    if (root == NULL)
    {
        root = newnode;
        // return root;
    }
    else if (root->data > data)
    {
        if (root->left == NULL)
        {
            root->left = newnode;
            // return root;
        }
        else
        {
            root->left = insert(root->left, data);
            // return root;
        }
    }
    else if (root->data < data)
    {
        if (root->right == NULL)
        {
            root->right = newnode;
            // return root;
        }
        else
        {
            root->right = insert(root->right, data);
            // return root;
        }
    }
    return root;
}

node *min(node *root)
{
    if (root->left == NULL)
    {
        return root;
    }
    else
    {
        return min(root->left);
    }
}
node *max(node *root)
{
    if (root->right == NULL)
    {
        return root;
    }
    else
    {
        return max(root->right);
    }
}
void level_order_traversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
        return; // it return to the preorder function.
    }
    else
    {
        return; // it returns to the preorder function.
    }
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
        return;
    }
    else
    {
        return;
    }
}
void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
        return;
    }
    else
    {
        return;
    }
}
node *delete_node(node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == data)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete (root);
            return NULL;
        }

        //  1 child (two cases)
        //  left child
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        //  right child
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        //  2 child
        if (root->left != NULL && root->right != NULL)
        {
            int min_val = min(root->right)->data;
            root->data = min_val;
            root->right = delete_node(root->right, min_val);
            return root;
        }
    }
    else if (root->data > data)
    {
        root->left = delete_node(root->left, data);
        return root;
    }
    else
    {
        root->right = delete_node(root->right, data);
        return root;
    }
}
int main()
{
    node *root = NULL;
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insert(root, data);
        cin >> data;
    }
    cout << "Level order traversal is: " << endl;
    level_order_traversal(root);
    cout << "\nThe preorder traversal is:" << endl;
    preorder(root);
    cout << endl;
    cout << "\nThe inorder traversal is:" << endl;
    inorder(root);
    cout << endl;
    cout << "\nThe postorder traversal is:" << endl;
    postorder(root);
    cout << endl;
    cout << "\nThe max element is: " << endl;
    cout << max(root)->data << endl;
    cout << "\nThe min element is: " << endl;
    cout << min(root)->data << endl;

    root = delete_node(root, 90);

    cout << "\nLevel order traversal is: " << endl;
    level_order_traversal(root);
    cout << "\nThe preorder traversal is:" << endl;
    preorder(root);
    cout << endl;
    cout << "\nThe inorder traversal is:" << endl;
    inorder(root);
    cout << endl;
    cout << "\nThe postorder traversal is:" << endl;
    postorder(root);
    cout << endl;
    cout << "\nThe max element is: " << endl;
    cout << max(root)->data << endl;
    cout << "\nThe min element is: " << endl;
    cout << min(root)->data << endl;
}