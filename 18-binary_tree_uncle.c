#include "binary_trees.h"
/**
* binary_tree_uncle - Finds the uncle of a given node
* @node: pointer to the node to find the uncle of
* Return: pointer to the uncle node, or NULL if none exists
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent &&
	node->parent->parent->right)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent
	&& node->parent->parent->left)
		return (node->parent->parent->left);
	return (NULL);
}
