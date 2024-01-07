#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Measures the balance
 * factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * to measure the balance factor
 *
 * Return: Balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		left = binary_tree_height(tree->left);
		left++;
	}
	if (tree->right)
	{
		right = binary_tree_height(tree->right);
		right++;
	}
	return (left - right);
}
