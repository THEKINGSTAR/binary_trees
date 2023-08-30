#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * Where
 * @parent: is a pointer to the parent node of the node to create
 * And
 * @value: is the value to put in the new node
 * When created, a node does not have any child
 * Return: a pointer to the new node, or NULL on failure
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr_binary_tree;

	ptr_binary_tree = malloc(sizeof(binary_tree_t));

	if (ptr_binary_tree == NULL)
		return (NULL);

	ptr_binary_tree->parent = parent;
	 ptr_binary_tree->n = value;

	return (ptr_binary_tree);
}
