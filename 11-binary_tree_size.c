#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * Where
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int r_height = 0, l_height = 0, height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (height + 1);

	l_height = binary_tree_size(tree->left);
	l_height++;
	r_height = binary_tree_size(tree->right);
	

	height = (l_height + r_height);
	return (height);
}
