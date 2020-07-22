#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_node - function that creates a binary tree node.
 *@parent: this is the adrees of a parent node.
 *@value: the value to save in new node.
 *Return: NULL if falue or the adress of a new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
	{
		root = (binary_tree_t *) malloc(sizeof(binary_tree_t));
		if (root == NULL)
			return (NULL);
		root->n = value;
		root->left = NULL;
		root->right = NULL;
		root->parent = NULL;
		return (root);
	}
	else
	{
		new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
	}

	return (new_node);
}
