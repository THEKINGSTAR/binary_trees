#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * Where
 * @parent: is a pointer to the node to insert the right-child in
 * And
 * @value: is the value to store in the new node
 * Your function must
 * Return: pointer to the created node,
 * or
 * NULL on failure or if parent is NULL
 *
 * If parent already has a ight-child,, the new node must take its place,
 * and
 * the old ight-child, must be set as the ight-child, of the new node.
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	if (ptr == NULL || !ptr || parent == NULL)
		return (NULL);
	ptr =  binary_tree_node(NULL, value);
	if (parent->right != NULL)
	{
		parent->right->parent = ptr;
		ptr->right = parent->right;
		parent->right = ptr;
	}
	else
	{
		parent->right = ptr;
		ptr->right = NULL;
	}
	ptr->parent = parent;
	ptr->n = value;
	return (ptr);

}
