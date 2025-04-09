#include "binary_trees.h"
#include <stddef.h>
/**
* max - check which value is more long
*
* @right_height: second value
* @left_height: first value
*
* Return: longer value
*/
int max(int right_height, int left_height)
{
	if (left_height >= right_height)
		return (left_height);
	else
		return (right_height);
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
		return (0);

	return (max(height(tree->left), height(tree->right)) + 1);
}
/**
* binary_tree_balance - function that measures
* the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: If tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;

	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}
