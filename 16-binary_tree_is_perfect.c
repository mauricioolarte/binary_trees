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
 *binary_tree_is_perfect - function that check if a binary tree is perfect.
 *@tree: pointer to root of tree.
 *Return: height of tree.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes = 0, leaves = 0, height = 0, number_nodes = 1, i;

	if (tree == NULL)
		return (0);
	nodes = binary_tree_nodes(tree);
	leaves = binary_tree_leaves(tree);
	height = binary_tree_height(tree);
	for (i = 0; i <= height; i++)
	{
		number_nodes = 2 * number_nodes;
	}
	if (leaves + nodes == number_nodes - 1)
		return (1);
	return (0);


}
