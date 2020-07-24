#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_postorder - thisfunction goes thougth a binary tree usingpreorder
 *@tree: is the root of tree.
 *@func: is pointer to funtion tha print value.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || (*func) == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, &(*func));
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, &(*func));
	(*func)(tree->n);
}
