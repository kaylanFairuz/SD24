#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
void freeTree(TreeNodePtr node);

TreeNodePtr preOrderSearch(TreeNodePtr root, NodeData d)
{
    if (root != NULL)
    {
        if (strcmp(d.word, root->data.word) == 0)
            return root;
        TreeNode *left_branch = preOrderSearch(root->left, d);
        if (left_branch != NULL)
            return left_branch;
        TreeNode *right_branch = preOrderSearch(root->right, d);
        if (right_branch != NULL)
            return right_branch;
    }

    return NULL;
}

TreeNodePtr inOrderSearch(TreeNodePtr root, NodeData d)
{
    if (root != NULL)
    {
        TreeNode *left_branch = inOrderSearch(root->left, d);
        if (left_branch != NULL)
            return left_branch;
        if (strcmp(d.word, root->data.word) == 0)
            return root;
        TreeNode *right_branch = inOrderSearch(root->right, d);
        if (right_branch != NULL)
            return right_branch;
    }

    return NULL;
}

TreeNodePtr postOrderSearch(TreeNodePtr root, NodeData d)
{
    if (root != NULL)
    {
        TreeNode *left_branch = postOrderSearch(root->left, d);
        if (left_branch != NULL)
            return left_branch;
        TreeNode *right_branch = postOrderSearch(root->right, d);
        if (right_branch != NULL)
            return right_branch;
        if (strcmp(d.word, root->data.word) == 0)
            return root;
    }

    return NULL;
}

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

    TreeNode *preOrderFind = preOrderSearch(bst.root, newNodeData("lea"));
    if (preOrderFind == NULL)
    {
        printf("\n\nKey is not found via pre-order.");
    }
    else
    {
        printf("\n\nThe key %s is found via pre-order.", preOrderFind->data.word);
    }
    TreeNode *inOrderFind = inOrderSearch(bst.root, newNodeData("lea"));
    if (inOrderFind == NULL)
    {
        printf("\nKey is not found via in-order.");
    }
    else
    {
        printf("\nThe key %s is found via in-order.", inOrderFind->data.word);
    }
    TreeNode *postOrderFind = postOrderSearch(bst.root, newNodeData("lea"));
    if (postOrderFind == NULL)
    {
        printf("\nKey is not found via post-order.");
    }
    else
    {
        printf("\nThe key %s is found via post-order.", postOrderFind->data.word);
    }

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
