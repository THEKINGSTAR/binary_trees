#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int ret;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    ret = binary_tree_is_root(root);
    printf("Is %d a root: %d\n", root->n, ret);
    ret = binary_tree_is_root(root->right);
    printf("Is %d a root: %d\n", root->right->n, ret);
    ret = binary_tree_is_root(root->right->right);
    printf("Is %d a root: %d\n", root->right->right->n, ret);
    return (0);
}

/*
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root
alex@/tmp/binary_trees$ ./5-root 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a root: 1
Is 128 a root: 0
Is 402 a root: 0
alex@/tmp/binary_trees$
*/
