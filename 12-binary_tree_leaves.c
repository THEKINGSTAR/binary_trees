#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * Where
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (size + 1);
	if (tree->right != NULL)
		size +=  binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		size +=  binary_tree_leaves(tree->right);

	return (size);
}
