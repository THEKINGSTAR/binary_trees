#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * Where
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height, l_height; /* ,height;*/

	if (tree == NULL)
		return (0);

	r_height = binary_tree_height(tree->right);
	l_height = binary_tree_height(tree->left);

	/* height = (r_height > l_height) ? 1 + r_height : 1 + l_height; */
	/* return (height); */

	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}
