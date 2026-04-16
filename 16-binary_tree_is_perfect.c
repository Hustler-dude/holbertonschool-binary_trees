#include "binary_trees.h"

/**
 * tree_height - returns height where NULL=0, any node=1+max children
 * @tree: pointer to node
 *
 * Return: height value for perfect-tree comparison
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);
	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);
	return ((left_h >= right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (tree_height(tree->left) != tree_height(tree->right))
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
