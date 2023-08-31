#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * Where
 * @parent: is a pointer to the node to insert the left-child in
 * And
 * @value: is the value to store in the new node
 * Your function must
 * Return: pointer to the created node,
 * or
 * NULL on failure or if parent is NULL
 *
 * If parent already has a left-child, the new node must take its place,
 * and
 * the old left-child must be set as the left-child of the new node.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	if (parent == NULL)
		return (NULL);

	ptr =  binary_tree_node(NULL, value);
	if (ptr == NULL || !ptr)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = ptr;
		ptr->left = parent->left;
		parent->left = ptr;
	}
	else
	{
		parent->left = ptr;
		ptr->left = NULL;
	}
	ptr->parent = parent;
	ptr->right = NULL;
	ptr->n = value;
	return (ptr);

}
