#include "binary_trees.h"
#include <stddef.h>
/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: If node is NULL or the parent is NULL, return NULL
* If node has no sibling, return NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node && node->parent == NULL)
	return (NULL);

	if (node->parent->left == node)
	return (node->parent->right);

	if (node->parent->right == node)
	return (node->parent->left);

	else
	return (NULL);
}
