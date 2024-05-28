# Exercises 9
> Tugas ke-7 mata kuliah Struktur Data 2024<br>
> Reference: _Noel Kalicharan - Advanced Topics in C_<br>
- [**Questions**](#qs)
    - [Q10. Draw Binary Search Tree](#q10)
    - [Q11. Sum of Levels](#q11)
    - [Q12. Draw Binary Tree From Traversal I](#q12)
    - [Q13. Draw Binary Tree From Traversal II](#q13)
    - [Q14. Binary Tree Traversal](#q14)
    - [Q15. Binary Search Tree Traversal](#q15)
    - [Q16. Complete Binary Search Tree](#q16)
- [**Solutions**](#ss)
    - [S10. Draw Binary Search Tree](#s10)
    - [S11. Sum of Levels](#s11)
    - [S12. Draw Binary Tree From Traversal I](#s12)
    - [S13. Draw Binary Tree From Traversal II](#s13)
    - [S14. Binary Tree Traversal](#s14)
    - [S15. Binary Search Tree Traversal](#s15)
    - [S16. Complete Binary Search Tree](#s16)

## Questions <a name="qs"></a>
### Q10. Draw Binary Search Tree <a name="q10"></a>
Draw the binary search tree (BST) obtained for the following keys assuming they are inserted in the order given: 

56 30 61 39 47 35 75 13 21 64 26 73 18

There is one almost complete BST for the previous keys. Draw it.

List the keys in an order that will produce the almost complete BST.

Assuming that the almost complete tree is stored in a one-dimensional array num[1..13], write a recursive function for printing the integers in post-order.

### Q11. Sum of Levels <a name="q11"></a>
An imaginary “external” node is attached to each null pointer of a binary tree of `𝑛` nodes. How many external nodes are there?

If `𝐼` is the sum of the levels of the original tree nodes and `𝐸` is the sum of the levels of the external nodes, prove that `𝐸 – 𝐼 = 2𝑛`.<br>
(`𝐼` is called the internal path length.)

Write a recursive function that, given the root of a binary tree, returns `𝐼`.

Write a nonrecursive function that, given the root of a binary tree, returns `𝐼`.

### Q12. Draw Binary Tree From Traversal I <a name="q12"></a>
Draw the binary tree whose in-order and post-order traversals of the nodes are as follows:

    In-order: G D P K E N F A T L<br>
    Post-order: G P D K F N T A L E

### Q13. Draw Binary Tree From Traversal II <a name="q13"></a>
Draw the binary tree whose in-order and pre-order traversals of the nodes are as follows:

    In-order: G D P K E N F A T L<br>
    Pre-order: N D G K P E T F A L

### Q14. Binary Tree Traversal <a name="q14"></a>
Write a recursive function that, given the root of a binary tree and a key, searches for the key using (i) a pre-order, (ii) an in-order, and (iii) a post-order traversal. If found, return the node containing the key; otherwise, return `null`.

### Q15. Binary Search Tree Traversal <a name="q15"></a>
Each node of a binary search tree contains three fields—`left`, `right`, and `data`—with their usual meanings; `data` is a positive integer field. Write an **efficient** function that, given the root of the tree and `key`, returns the smallest number in the tree that is greater than `key`. If there is no such number, return `-1`.

### Q16. Complete Binary Search Tree <a name="q16"></a>
Store the following integers in an array bst[1..15] such that bst represents a complete
binary search tree: 

34 23 45 46 37 78 90 2 40 20 87 53 12 15 91.

## Solutions <a name="ss"></a>
### S10. Draw Binary Search Tree <a name="s10"></a>
Binary search tree using given order of insertion:
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q10-1.png"/>
</p>

Almost complete binary search tree:
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q10-2.png"/>
</p>

To get the insertion order, we can traverse the tree by each level (otherwise known as _level order traversal_):
- Level 0: 47
- Level 1: 26 73
- Level 2: 18 35 61 75
- Level 3: 13 21 30 39 56 64

Final Insertion Order: **47 26 73 18 35 61 75 13 21 30 39 56 64**

We can base our recursive function to the following rules:
> In general, if the tree is represented by an array T[1..n], the following are true:<br>
> • T[1] is the root.<br>
> • The left subtree of T[i] is T[2i] if 2i <= n and null otherwise.<br>
> • The right subtree of T[i] is T[2i+1] if 2i+1 <= n and null otherwise.<br>
> • The parent of T[i] is T[i/2] (integer division).
>
> _*Chapter 9: Introduction to Binary Trees, Page 233_

**Implementation of recursive function in C/C++**:
```cpp
// int num[] = {47, 26, 73, 18, 35, 61, 75, 13, 21, 30, 39, 56, 64};
// int length = sizeof(num) / sizeof(num[0]);
// 1-based index is used, thus the function should be called with: post_order(num, 1, length)

void post_order(int num[], int index, int length)
{
    if (index <= length)
    {
        post_order(num, index * 2, length);      // visit left subtree
        post_order(num, index * 2 + 1, length);  // visit right subtree
        printf("%d ", num[index - 1]);           // visit root (print key)
    }
}
```

### S11. Sum of Levels <a name="s11"></a>
Consider the following case:
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q11.jpg"/>
</p>

When the root (10) is placed, there are 2 null pointers. If we choose to insert a node to the left (6), the left null pointer will be replaced by the 6, but 2 new null pointers are made (with root 6), making the total added by 1. If instead we choose to insert a node to the right (18), the right null pointer will be replaced by the 18, but 2 new null pointers are made (with root 18), making the total added by 1. In either case, for every insertion we make, we will always make 1 new null pointer. 

It can be summarized that if we have a binary tree with `𝑛` nodes, the number of null pointer or imaginary external nodes it will have is `2 + (𝑛-1)` (2 node from the first insertion, and 1 node for the next n-1 insertion) or `𝑛+1`.

Assume a binary tree with `n` nodes has `I` as the sum of the nodes and `E` as the sum of the imaginary external nodes. Traversing from the root, there are three cases.
1. Node has no child, thus there are 2 imaginary external nodes and `E` will be increased by 2.
2. Node has one leaf, thus there is 1 imaginary external node and 1 internal node and both sum will be increased by 1.
3. Node has two leaf, thus there is 2 node and `I` will be increased by 2.
In case 2 and 3, eventually we will go back to case 1, where we add `E` by 2. In conclusion, each internal node will give 2 additional values to `E`, and since there are `n` nodes, we can write the relation as `E = I + 2n`. **(Proof by Property of Binary Trees)**

Assume that `E = I + 2n` holds true for all `n ≥ 0`. Base case: `n = 0`, then `E = I = 0`, and `E = I + 2n = 0`. We will prove that `E = I + 2n` for all binary tree that has `m+1` nodes. Suppose the binary tree `T` have `m+1` node. Removing a leaf from the tree will result in a binary tree `T'` that has `m` node. Suppose the leaf that was removed was at level `d`, thus it follows that `E = E' + d + 2` and `I = I' + d`. Therefore:

$E = E' + d + 2$<br>
$E = I' + 2m + d + 2$<br>
$E = I - d + 2m + d + 2$<br>
$E = I + 2m + 2$<br>
$E = I + 2(m + 1)$ **(Proof by Induction)** <br>

**Recursive Implementation of finding `I` in C/C++**
```c
// typedef struct tree_node
// {
//     int key;
//     struct tree_node *left, *right;
// } TreeNode;

int level_sum(TreeNode* node, int level)
{
    if (node == NULL)
        return 0;
 
    return node->data * level + level_sum(node->left, level + 1, sum) + level_sum(node->right, level + 1, sum);
}
```

**Non-recursive Implementation of finding `I` in C++**
```cpp
// struct TreeNode
// {
//     int data;
//     TreeNode *left, *right;
// };

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
            sum += current->data * current_level;

            if (current->left != NULL)
                q.push(current->left);

            if (current->right != NULL)
                q.push(current->right);
        }

        current_level++;
    }

    return sum;
}
```

### S12. Draw Binary Tree From Traversal I <a name="s12"></a>
At post-order traversal, the root is always visited last, while at in-order, the root is always visited in the middle:

Post-order: **G P D K F N T A L** | E <br>
(_E is the root_)<br>
In-order: **G D P K** | E | **N F A T L**
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q12-1.png"/>
</p>

Members of {G, D, P, K} belong to the left subtree of {E} and members of {N, F, A, T, L} belong to the right subtree of {E}:

Post-order: **G P D** | K | **F N T A** | L | E <br>
(_K and L are each the root of their subtree_)<br>
In-order: **G D P** | K | E | **N F A T** | L 
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q12-2.png"/>
</p>

Members of {G, D, P} belong to the left subtree of {K} while members of {N, F, A, T} belong to the left subtree of {L}:

Post-order: **G P** | D | K | **F N T** | A | L | E <br>
(_D and A are each the root of their subtree_)<br>
In-order: **G** | D | **P** | K | E | **N F** | A | **T** | L 
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q12-3.png"/>
</p>

Members of {F, N} must belong to the left subtree of {A}:

In-order: G | D | P | K | E | **N F** | A | T | L <br>
(_G and P must be the leaves of D, while T must be the right leaf of A_)<br>
Post-order: G | P | D | K | **F N** | T | A | L | E
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q12-4.png"/>
</p>

Post-order: G | P | D | K | **F** | N | T | A | L | E<br>
(_N must be the root of the left subtree of A_)<br>
In-order: G | D | P | K | E | N | **F** | A | T | L 
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q12-5.png"/>
</p>

In-order: G | D | P | K | E | N | F | A | T | L <br>
(_F must be the right leaf of N_)<br>
Post-order: G | P | D | K | F | N | T | A | L | E
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q12-6.png"/>
</p>

### S13. Draw Binary Tree From Traversal II <a name="s13"></a>
At pre-order traversal, the root is always visited first, while at in-order, the root is always visited in the middle:

Pre-order: N | **D G K P E T F A L** <br>
(_N is the root_)<br>
In-order: **G D P K E** | N | **F A T L**
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q13-1.png"/>
</p>

Members of {G, D, P, K, E} belong to the left subtree of {N} and members of {F, A, T, L} belong to the right subtree of {N}:

Pre-order: N | D | **G K P E** | T | **F A L** <br>
(_D and T are each the root of their subtree_)<br>
In-order: **G** | D | **P K E** | N | **F A** | T | **L**
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q13-2.png"/>
</p>

In-order: G | D | **P K E** | N | **F A** | T | L *<br>
(_G must be the left leaf of D, while L must be the right leaf of T_)<br>
Pre-order: N | D | G | **K P E** | T | **F A** | L
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q13-3.png"/>
</p>

Members of {P, K, E} belong to the right subtree of {D} and members of {F, A} belong to the left subtree of {T}:

Pre-order: N | D | G | K | **P E** | T | F | **A** | L <br>
(_K and F are each the root of their subtree_)<br>
In-order: G | D | **P** | K | **E** | N | F | **A** | T | L
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q13-4.png"/>
</p>

In-order: G | D | P | K | E | N | F | A | T | L *<br>
(_P and E must be the leaves of K, while A must be the right leaf of F_)<br>
Pre-order: N | D | G | K | P | E | T | F | A | L
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Tugas/assets/e9-q13-5.png"/>
</p>

### S14. Binary Tree Traversal <a name="s14"></a>
### S15. Binary Search Tree Traversal <a name="s15"></a>
### S16. Complete Binary Search Tree <a name="s16"></a>
