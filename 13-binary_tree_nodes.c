#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 *
 * Where
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0
 * A NULL pointer is not a leaf
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		size++;
	size += binary_tree_nodes(tree->left);
	size +=	binary_tree_nodes(tree->right);

	return (size);
}
