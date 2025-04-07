#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - that deletes an entire binary tree
* @tree: pointer to the root node of the tree to delete
* Return: If tree is NULL, do nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	tree->left = NULL;
	tree->right = NULL;
	tree->parent = NULL;
	free(tree);
}
