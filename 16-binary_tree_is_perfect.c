#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: Height of tree, -1 if NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (-1);

	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	return (right_h + 1);
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively
 * @tree: Pointer to the root node
 * @depth: Depth of current node
 * @level: Level to compare with leaf depth
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

return (is_perfect_recursive(tree->left, depth + 1, level) &&
		is_perfect_recursive(tree->right, depth + 1, level));
}

/**
* binary_tree_is_perfect - that checks if a binary tree is perfect
*
* @tree: pointer to the root node of the tree to check
*
* Return: 1 if perfect else 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);
	return (is_perfect_recursive(tree, 0, height));
}
