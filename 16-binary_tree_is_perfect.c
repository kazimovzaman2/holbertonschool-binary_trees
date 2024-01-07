#include "binary_trees.h"


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		return (1 + binary_tree_is_perfect(tree->left));

	if (tree->right)
		return (1 + binary_tree_is_perfect(tree->right));

	if (left == right)
		return (1);
	else
		return (0);
}
