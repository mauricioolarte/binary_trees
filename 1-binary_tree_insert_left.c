#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_insert_left - function that creates a binary tree node.
 *@parent: this is the adrees of a parent node.
 *@value: the value to save in new node.
 *Return: NULL if falue or the adress of a new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);
		parent->left = new_node;
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
		parent->left->parent = new_node;
		new_node->left = parent->left;

		parent->left = new_node;
		new_node->parent = parent;
		new_node->n = value;
		new_node->right = NULL;
	}

	return (new_node);
}
