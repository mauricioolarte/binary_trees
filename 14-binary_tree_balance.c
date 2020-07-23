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
	int height_left, height_right, r = 1, l = 1;

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
 *binary_tree_balance - function that measures the balance of a binary tree
 *@tree: pointer to root of tree.
 *Return: balance of tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);
	balance = binary_tree_height(tree->left) -
		binary_tree_height(tree->right);
	return (balance);
}
