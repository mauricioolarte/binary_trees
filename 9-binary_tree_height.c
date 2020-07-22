#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_height - function that measures the height of a binary tree
 *@tree: pointer to root of tree.
 *Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left, height_right, r = 0, l = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		l = 1;
	if (tree->right != NULL)
		r = 1;

	height_left = binary_tree_height(tree->left) + l;
	height_right = binary_tree_height(tree->right) + r;

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);

}
