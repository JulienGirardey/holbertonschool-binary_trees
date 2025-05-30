#include "binary_trees.h"
#include <stddef.h>
/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: pointer to the root node of the tree to check
*
* Return: If tree is NULL, return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
}
