#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_leaves - function that measures the leaves of a binary tree
 *@tree: pointer to root of tree.
 *Return: height of tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int counter = 0;


	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		counter = 1;

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right) + counter);

}
