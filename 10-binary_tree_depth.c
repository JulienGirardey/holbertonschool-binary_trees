#include "binary_trees.h"

/**
 * depth - check the depth
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: size of depth
 */
int depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (depth(tree->parent) + 1);
}

/**
* binary_tree_depth - that measures the depth of a node in a binary tree
*
* @tree: pointer to the node to measure the depth
*
* Return: size of depth or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (depth(tree));
}
