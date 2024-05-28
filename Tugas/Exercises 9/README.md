# Exercises 9
> Tugas ke-7 mata kuliah Struktur Data 2024<br>
> Reference: _Noel Kalicharan - Advanced Topics in C_<br>
- [**Questions**](#qs)
    - [Q10. Draw Binary Search Tree](#q10)
    - [Q11. Sum of Levels](#q11)
    - [Q12. Draw Binary Search Tree From Traversal I](#q12)
    - [Q13. Draw Binary Search Tree From Traversal II](#q13)
    - [Q14. Binary Search Tree Traversal](#q14)
    - [Q15. Smallest Number Greater Than Key](#q15)
    - [Q16. Complete Binary Search Tree](#q16)
- [**Solutions**](#ss)
    - [S10. Draw Binary Search Tree](#s10)
    - [S11. Sum of Levels](#s11)
    - [S12. Draw Binary Search Tree From Traversal I](#s12)
    - [S13. Draw Binary Search Tree From Traversal II](#s13)
    - [S14. Binary Search Tree Traversal](#s14)
    - [S15. Smallest Number Greater Than Key](#s15)
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

### Q12. Draw Binary Search Tree From Traversal I <a name="q12"></a>
Draw the binary tree whose in-order and post-order traversals of the nodes are as follows:

    In-order: G D P K E N F A T L<br>
    Post-order: G P D K F N T A L E

### Q13. Draw Binary Search Tree From Traversal II <a name="q13"></a>
Draw the binary tree whose in-order and pre-order traversals of the nodes are as follows:

    In-order: G D P K E N F A T L<br>
    Pre-order: N D G K P E T F A L

### Q14. Binary Search Tree Traversal <a name="q14"></a>
Write a recursive function that, given the root of a binary tree and a key, searches for the key using (i) a pre-order, (ii) an in-order, and (iii) a post-order traversal. If found, return the node containing the key; otherwise, return `null`.

### Q15. Smallest Number Greater Than Key <a name="q15"></a>
Each node of a binary search tree contains three fields—`left`, `right`, and `data`—with their usual meanings; `data` is a positive integer field. Write an **efficient** function that, given the root of the tree and `key`, returns the smallest number in the tree that is greater than `key`. If there is no such number, return `-1`.

### Q16. Complete Binary Search Tree <a name="q16"></a>
Store the following integers in an array bst[1..15] such that bst represents a complete
binary search tree: 

34 23 45 46 37 78 90 2 40 20 87 53 12 15 91.

## Solutions <a name="ss"></a>
### S10. Draw Binary Search Tree <a name="s10"></a>
Binary search tree:
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

We can base our recursive function by the following rules:
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
### S12. Draw Binary Search Tree From Traversal I <a name="s12"></a>
### S13. Draw Binary Search Tree From Traversal II <a name="s13"></a>
### S14. Binary Search Tree Traversal <a name="s14"></a>
### S15. Smallest Number Greater Than Key <a name="s15"></a>
### S16. Complete Binary Search Tree <a name="s16"></a>
