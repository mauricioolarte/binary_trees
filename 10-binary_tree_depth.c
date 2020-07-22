#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_depth - function that measures the height of a binary tree
 *@tree: pointer to root of tree.
 *Return: height of tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int l = 0;


	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		l = 1;
	return (binary_tree_depth(tree->parent) + l);


}
