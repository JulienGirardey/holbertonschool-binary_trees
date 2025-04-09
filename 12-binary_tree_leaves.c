#include "binary_trees.h"

/**
 * is_leaf - found leaf
 *
 * @node: node to seek
 *
 * Return: 1 if leaf found else 0
 */
int is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
* binary_tree_leaves - that counts the leaves in a binary tree
*
* @tree: pointer to the root node of the tree to count the number of leaves
*
* Return: the number of leaf of 0 if no leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
