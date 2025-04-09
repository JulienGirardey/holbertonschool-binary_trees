#include "binary_trees.h"

/**
 * max - check which value is more long
 *
 * @a: first value
 * @b: second value
 *
 * Return: longer value
 */
int max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

/**
 * height - browse tree
 *
 * @tree: variable to browse
 *
 * Return: path left and right
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (max(height(tree->left), height(tree->right)) + 1);
}

/**
* binary_tree_height - that measures the height of a binary tree
*
* @tree: pointer to the root node of the tree to measure the height
*
* Return: size of tree, If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree));
}
