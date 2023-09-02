#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * Where
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int r_height = 0, l_height = 0, height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (l_height > r_height ? l_height : r_height);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	height = (l_height > r_height ? l_height + 1 : r_height + 1);
	return (height);
}
