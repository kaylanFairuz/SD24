#include <stdio.h>

void post_order(int num[], int index, int length)
{
    if (index <= length)
    {
        post_order(num, index * 2, length);     // visit left subtree
        post_order(num, index * 2 + 1, length); // visit right subtree
        printf("%d ", num[index - 1]);          // visit root (print key)
    }
}

int main()
{
    int num[] = {47, 26, 73, 18, 35, 61, 75, 13, 21, 30, 39, 56, 64};
    int length = sizeof(num) / sizeof(num[0]);
    post_order(num, 1, length);

    return 0;
}
