#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_leaves - function that measures the leaves of a binary tree
 *@tree: pointer to root of tree.
 *Return: height of tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int counter = 0;


	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		counter = 1;

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right) + counter);

}

/**
 *binary_tree_nodes - function that measures the nodes of a binary tree
 *@tree: pointer to root of tree.
 *Return: height of tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int counter = 0;


	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		counter = 1;

	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + counter);

}

/**
 *binary_tree_is_full - function that measures the nodes of a binary tree
 *@tree: pointer to root of tree.
 *Return: height of tree.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int nodes = 0, leaves = 0;

	nodes = binary_tree_nodes(tree);
	leaves = binary_tree_leaves(tree);

	if (leaves == nodes + 1)
		return (1);
	return (0);


}
