#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MaxLineSize 100
#define MaxWordSize 20

typedef struct
{
    char word[MaxWordSize + 1];
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

TreeNodePtr buildTree(char **linePtr);

void preOrder(TreeNodePtr node);
void inOrder(TreeNodePtr node);
void postOrder(TreeNodePtr node);
void visit(TreeNodePtr node);
void freeTree(TreeNodePtr node);

int main()
{
    char line[MaxLineSize + 1];
    fgets(line, MaxLineSize, stdin);

    char *linePtr = line;
    BinaryTree bt;
    bt.root = buildTree(&linePtr);

    printf("\nThe pre-order traversal is: ");
    preOrder(bt.root);
    printf("\n\nThe in-order traversal is: ");
    inOrder(bt.root);
    printf("\n\nThe post-order traversal is: ");
    postOrder(bt.root);
    printf("\n\n");

    freeTree(bt.root);
    return 0;
}

TreeNodePtr buildTree(char **linePtr)
{
    char str[MaxWordSize + 1];
    if (sscanf(*linePtr, "%s", str) != 1)
        return NULL;

    *linePtr += strlen(str) + 1;

    if (strcmp(str, "@") == 0)
        return NULL;

    TreeNodePtr p = (TreeNodePtr)malloc(sizeof(TreeNode));
    strcpy(p->data.word, str);
    p->left = buildTree(linePtr);
    p->right = buildTree(linePtr);
    return p;
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

void freeTree(TreeNodePtr node)
{
    if (node != NULL)
    {
        freeTree(node->left);
        freeTree(node->right);
        free(node);
    }
}
