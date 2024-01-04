#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: Always 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + binary_tree_depth(tree->parent));
	}
}
