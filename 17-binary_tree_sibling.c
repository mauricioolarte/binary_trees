#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_sibling - this function find the sibling of a node.
 *@node: is node to find a sybling.
 *Return: pointer to sybling of null if no exist.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sybling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		sybling = node->parent->right;

	if (node->parent->right == node)
		sybling = node->parent->left;
	return (sybling);

}
