#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_preorder - this function goes thougth a binary tree usingpreorder
 *@tree: is the root of tree.
 *@func: is pointer to funtion tha print value.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || (*func) == NULL)
		return;

	(*func)(tree->n);
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, &(*func));
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, &(*func));
}
