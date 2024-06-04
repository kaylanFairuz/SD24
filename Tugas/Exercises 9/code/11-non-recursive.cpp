#include <bits/stdc++.h>
using namespace std;

#define MaxLineSize 100
#define MaxWordSize 20
#define max(a, b) ((a) > (b) ? (a) : (b))

typedef struct
{
    char word[MaxWordSize + 1];
    int key;
} NodeData;

typedef struct treeNode
{
    NodeData data;
    struct treeNode *left, *right;
} TreeNode, *TreeNodePtr;

typedef struct
{
    TreeNodePtr root;
} BinaryTree;

TreeNodePtr newTreeNode(NodeData d);
NodeData newNodeData(char str[]);
TreeNodePtr findOrInsert(BinaryTree bt, NodeData d);
void preOrder(TreeNodePtr node);
void inOrder(TreeNodePtr node);
void postOrder(TreeNodePtr node);
void visit(TreeNodePtr node);
int numNodes(TreeNodePtr root);
int numLeaves(TreeNodePtr root);
int height(TreeNodePtr root);

int level_sum(TreeNode *root)
{
    queue<TreeNode *> q;

    int sum = 0;
    int current_level = 0;

    q.push(root);

    while (!q.empty())
    {
        int current_level_nodes = q.size();

        for (int i = 0; i < current_level_nodes; i++)
        {
            TreeNode *current = q.front();
            q.pop();
            sum += current_level;

            if (current->left != NULL)
                q.push(current->left);

            if (current->right != NULL)
                q.push(current->right);
        }

        current_level++;
    }

    return sum;
}

void freeTree(TreeNodePtr node);

int main()
{
    BinaryTree bst;
    bst.root = NULL;
    char str[MaxWordSize + 1];

    while (scanf("%s", str) == 1)
    {
        if (bst.root == NULL)
            bst.root = newTreeNode(newNodeData(str));
        else
        {
            TreeNodePtr node = findOrInsert(bst, newNodeData(str));
        }
    }

    printf("\nThe pre-order traversal is: ");
    preOrder(bst.root);
    printf("\nThe in-order traversal is: ");
    inOrder(bst.root);
    printf("\nThe post-order traversal is: ");
    postOrder(bst.root);
    printf("\n\nThe number of nodes is: %d", numNodes(bst.root));
    printf("\nThe number of leaves is: %d", numLeaves(bst.root));
    printf("\nThe height of the tree is: %d", height(bst.root));
    printf("\n\nI = %d", level_sum(bst.root));

    freeTree(bst.root);
    return 0;
}

TreeNodePtr newTreeNode(NodeData d)
{
    TreeNodePtr p = (TreeNodePtr)malloc(sizeof(TreeNode));
    p->data = d;
    p->left = p->right = NULL;
    return p;
}

NodeData newNodeData(char str[])
{
    NodeData temp;
    strcpy(temp.word, str);
    temp.key = atoi(str);
    return temp;
}

TreeNodePtr findOrInsert(BinaryTree bst, NodeData d)
{
    TreeNodePtr newTreeNode(NodeData);
    if (bst.root == NULL)
        return newTreeNode(d);
    TreeNodePtr curr = bst.root;
    int cmp;
    while ((cmp = strcmp(d.word, curr->data.word)) != 0)
    {
        if (cmp < 0)
        {
            if (curr->left == NULL)
                return curr->left = newTreeNode(d);
            curr = curr->left;
        }
        else
        {
            if (curr->right == NULL)
                return curr->right = newTreeNode(d);
            curr = curr->right;
        }
    }

    return curr;
}

void visit(TreeNodePtr node)
{
    printf("%s ", node->data.word);
}

void preOrder(TreeNodePtr node)
{
    if (node != NULL)
    {
        visit(node);
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(TreeNodePtr node)
{
    if (node != NULL)
    {
        inOrder(node->left);
        visit(node);
        inOrder(node->right);
    }
}

void postOrder(TreeNodePtr node)
{
    if (node != NULL)
    {
        postOrder(node->left);
        postOrder(node->right);
        visit(node);
    }
}

int numNodes(TreeNodePtr root)
{
    if (root == NULL)
        return 0;
    return 1 + numNodes(root->left) + numNodes(root->right);
}

int numLeaves(TreeNodePtr root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return numLeaves(root->left) + numLeaves(root->right);
}

int height(TreeNodePtr root)
{
    if (root == NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

void freeTree(TreeNodePtr node)
{
    if (node != NULL)
    {
        freeTree(node->left);
        freeTree(node->right);
        free(node);
    }
}
