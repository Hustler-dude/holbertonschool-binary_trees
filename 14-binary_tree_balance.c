#include "binary_trees.h"

/**
 * tree_height - measures height counting NULL as 0, non-null as 1+
 * @tree: pointer to the node
 *
 * Return: height for balance computation
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);
	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);
	if (left_h >= right_h)
		return (left_h + 1);
	return (right_h + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((int)tree_height(tree->left) - (int)tree_height(tree->right));
}
