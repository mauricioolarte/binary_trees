#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_is_root - this a function that checks if node is a leaf.
 *@node: is the node to check.
 *Return: 1 if leaf or 0 is not leaf.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);


}
