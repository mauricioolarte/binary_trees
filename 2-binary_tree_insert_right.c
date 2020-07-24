#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_insert_right - function that creates a binary tree node.
 *@parent: this is the adrees of a parent node.
 *@value: the value to save in new node.
 *Return: NULL if falue or the adress of a new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);
		parent->right = new_node;
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	else
	{
		new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);
		parent->right->parent = new_node;
		new_node->right = parent->right;

		parent->right = new_node;
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
	}

	return (new_node);
}
