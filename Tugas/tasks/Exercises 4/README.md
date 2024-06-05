### [← Back](../../README.md)
<hr />

# Exercises 4
> Tugas ke-2 mata kuliah Struktur Data 2024<br>
> Reference: _Noel Kalicharan - Advanced Topics in C_<br>
- [**Questions**](#qs)
    - [Q7. Integer to Binary](#q7)
    - [Q8. Binary to Integer](#q8)
    - [Q9. Binary Sum](#q9)
    - [Q11. Anagrams](#q11)
    - [Q12. Count-out](#q12)
- [**Solutions**](#ss)
    - [S7. Integer to Binary](#s7)
    - [S8. Binary to Integer](#s8)
    - [S9. Binary Sum](#s9)
    - [S11. Anagrams](#s11)
    - [S12. Count-out](#s12)

## Questions <a name="qs"></a>
### Q7. Integer to Binary <a name="q7"></a>
Write a function that, given an integer n, converts n to binary and stores each bit in one node of a linked list with the least significant bit at the head of the list and the most significant bit at the tail. For example, given 13, the bits are stored in the order 1 0 1 1, from head to tail. Return a pointer to the head of the list.

### Q8. Binary to Integer <a name="q8"></a>
Write a function that, given a pointer to a linked list of bits stored as in 7, traverses the list once and returns the decimal equivalent of the binary number.

### Q9. Binary Sum <a name="q9"></a>
You are given two pointers, b1 and b2, each pointing to a binary number stored as in 7. You must return a pointer to a newly created linked list representing the binary sum of the given numbers with the least significant bit at the head of the list and the most significant bit at the tail of the list. Write functions to do this in two ways:

(i) Using the functions from 7 and 8<br>
(ii) Performing a “bit-by-bit” addition

### Q11. Anagrams <a name="q11"></a>
Two words are anagrams if one word can be formed by rearranging all the letters of the other word, for example treason, senator. A word is represented as a linked list with one letter per node of the list. 

Write a function that, given w1 and w2 each pointing to a word of lowercase letters, returns 1 if the words are anagrams and 0 if they are not. Base your algorithm on the following: for each letter in w1, search w2 for it; if found, delete it and continue. Otherwise, return 0.

### Q12. Count-out <a name="q12"></a>
The children’s game of “count-out” is played as follows: n children (numbered 1 to n) are arranged in a circle. A sentence consisting of m words is used to eliminate one child at a time until one child is left. 

Starting at child 1, the children are counted from 1 to m, and the mth child is eliminated. Starting with the child after the one just eliminated, the children are again counted from 1 to m, and the mth child eliminated. This is repeated until one child is left. Counting is done circularly, and eliminated children are not counted.

Write a program to read values for n and m and print the number of the last remaining child. Use a linked list to hold the children.

Hint: Let the last node point to the first, creating a circular list.

## Solutions <a name="ss"></a>
