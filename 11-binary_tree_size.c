#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_size - function that measures the size of a binary tree
 *@tree: pointer to root of tree.
 *Return: height of tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int counter = 0;


	if (tree == NULL)
		return (0);
	if (tree != NULL)
		counter = 1;

	return (binary_tree_size(tree->right) +
		binary_tree_size(tree->left) + counter);


}
