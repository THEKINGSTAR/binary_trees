#include "binary_trees.h"

/**
 * delete_subtree - recursitvly traverse tree and free its nodes
 * Where
 * @subtree: is a pointer to the root node of the tree to delete
 * If tree is NULL, do nothing
 * Return: NO RETURN VALUES
 *
 */
void delete_subtree(binary_tree_t *subtree)
{
	if (subtree == NULL)
		return;

	delete_subtree(subtree->left);
	delete_subtree(subtree->right);

	free(subtree);
}



/**
 * binary_tree_delete -  function that deletes an entire binary tree
 * Where
 * @tree: is a pointer to the root node of the tree to delete
 * If tree is NULL, do nothing
 * Return: NO RETURN VALUES
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	delete_subtree(tree);
}
