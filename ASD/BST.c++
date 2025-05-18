
// #include <iostream>
// using namespace std;
// struct TreeNode
// {
//     int data;
//     TreeNode *left;
//     TreeNode *right;
//     int height;
// };
// // Utility to get the height of a node
// int height(TreeNode *node)
// {
//     if (node == nullptr)
//         return 0;
//     return node->height;
// }
// // Utility to get maximum of two integers
// int max(int a, int b)
// {
//     return (a > b) ? a : b;
// }
// // Utility to create a new tree node
// TreeNode *newNode(int data)
// {
//     TreeNode *node = new TreeNode;
//     node->data = data;
//     node->left = nullptr;
//     node->right = nullptr;
//     node->height = 1; // new node is initially at leaf
//     return node;
// }

// // Right rotate
// TreeNode *rightRotate(TreeNode *y)
// {
//     TreeNode *x = y->left;
//     TreeNode *T2 = x->right;
//     // Perform rotation
//     x->right = y;
//     y->left = T2;
//     // Update heights
//     y->height = max(height(y->left), height(y->right)) + 1;
//     x->height = max(height(x->left), height(x->right)) + 1;
//     // Return new root
//     return x;
// }
// // Left rotate
// TreeNode *leftRotate(TreeNode *x)
// {
//     TreeNode *y = x->right;
//     TreeNode *T2 = y->left;
//     // Perform rotation
//     y->left = x;
//     x->right = T2;
//     // Update heights
//     x->height = max(height(x->left), height(x->right)) + 1;
//     y->height = max(height(y->left), height(y->right)) + 1;
//     // Return new root
//     return y;
// }

// // Get balance factor
// int getBalance(TreeNode *node)
// {
//     if (node == nullptr)
//         return 0;
//     return height(node->left) - height(node->right);
// }

// // Insert function with balancing
// TreeNode *insert(TreeNode *node, int data)
// {
//     if (node == nullptr)
//         return newNode(data);

//     if (data < node->data)
//         node->left = insert(node->left, data);
//     else if (data > node->data)
//         node->right = insert(node->right, data);
//     else
//         return node; // Duplicate data not allowed

//     // Update height
//     node->height = 1 + max(height(node->left), height(node->right));

//     // Get balance factor
//     int balance = getBalance(node);

//     // Balancing
//     // Left Left Case
//     if (balance > 1 && data < node->left->data)
//         return rightRotate(node);

//     // Right Right Case
//     if (balance < -1 && data > node->right->data)
//         return leftRotate(node);

//     // Left Right Case
//     if (balance > 1 && data > node->left->data)
//     {
//         node->left = leftRotate(node->left);
//         return rightRotate(node);
//     }

//     // Right Left Case
//     if (balance < -1 && data < node->right->data)
//     {
//         node->right = rightRotate(node->right);
//         return leftRotate(node);
//     }

//     return node;
// }

// // Inorder traversal
// void inorder(TreeNode *root)
// {
//     if (root != nullptr)
//     {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }
// // Main function
// int main()
// {
//     TreeNode *root = nullptr;
//     int arr[] = {10, 20, 30, 40, 50, 25, 5, 15, 35, 45}; // 10 elements
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Inserting elements...\n";
//     for (int i = 0; i < n; ++i)
//     {
//         root = insert(root, arr[i]);
//     }
//     cout << "\nInorder traversal after balancing:\n";
//     inorder(root);
//     cout << endl;
//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    int height;
};

// height of node
int height(TreeNode *node)
{
    return node ? node->height : 0;
}

// max of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// new tree node
TreeNode *newNode(int data)
{
    TreeNode *node = new TreeNode;
    node->data = data;
    node->left = node->right = nullptr;
    node->height = 1;
    return node;
}

// Right rotate
TreeNode *rightRotate(TreeNode *y)
{
    TreeNode *x = y->left;
    TreeNode *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// Left rotate
TreeNode *leftRotate(TreeNode *x)
{
    TreeNode *y = x->right;
    TreeNode *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

// Get balance factor
int getBalance(TreeNode *node)
{
    return node ? height(node->left) - height(node->right) : 0;
}

// Insert without balancing
TreeNode *insertUnbalanced(TreeNode *node, int data)
{
    if (node == nullptr)
        return newNode(data);
    if (data < node->data)
        node->left = insertUnbalanced(node->left, data);
    else
        node->right = insertUnbalanced(node->right, data);
    return node;
}

// Insert with balancing (AVL)
TreeNode *insert(TreeNode *node, int data)
{
    if (node == nullptr)
        return newNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    if (balance > 1 && data < node->left->data)
        return rightRotate(node);

    if (balance < -1 && data > node->right->data)
        return leftRotate(node);

    if (balance > 1 && data > node->left->data)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && data < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// In-order traversal
void inorder(TreeNode *root)
{
    if (root != nullptr)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// print the tree
void printTree(TreeNode *root, int space = 0, int indent = 5)
{
    if (root == nullptr)
        return;

    space += indent;
    printTree(root->right, space);
    cout << setw(space) << root->data << "\n";
    printTree(root->left, space);
}

    // Main function
    int
    main()
{
    int arr[] = {10, 5, 15, 20, 25, 50, 35, 40, 45, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    TreeNode *unbalancedRoot = nullptr;
    for (int i = 0; i < n; ++i)
    {
        unbalancedRoot = insertUnbalanced(unbalancedRoot, arr[i]);
    }
    cout << "\nInorder traversal before balancing:\n";
    inorder(unbalancedRoot);
    cout << "\n\nTree structure before balancing:\n";
    printTree(unbalancedRoot);
    TreeNode *balancedRoot = nullptr;
    cout << "\n---------------------------------\n";
    for (int i = 0; i < n; ++i)
    {
        balancedRoot = insert(balancedRoot, arr[i]);
    }
    cout << "\nInorder traversal after balancing:\n";
    inorder(balancedRoot);
    cout << "\n\nTree structure after balancing:\n";
    printTree(balancedRoot);
    return 0;
}
