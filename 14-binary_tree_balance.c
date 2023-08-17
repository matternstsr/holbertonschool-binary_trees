#include "binary_trees.h"

/**
 * binary_tree_balance - Measure load balance
 * @tree: The input tree
 * Return: The balance of nodes
 * using old #9 for height
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side_ht, right_side_ht;

	if (!tree)/*no tree then get out*/
		return (0);
	/*recur check the left side height or the tree*/
	left_side_ht = binary_tree_height(tree->left);
	/*recur check the right side height or the tree*/
	right_side_ht = binary_tree_height(tree->right);
	return (left_side_ht - right_side_ht);/* return the DIFF of the heights*/
/*walla*/
}



/*already made binary_tree_height #9 */

/**
 * binary_tree_height -function that measures the height of a binary tree
 * @tree: Is a pointer to the root node
 * Return: If tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side_ht, right_side_ht;

	if (!tree)
		return (0);

	left_side_ht = binary_tree_height(tree->left);
	right_side_ht = binary_tree_height(tree->right);
	if (left_side_ht > right_side_ht)
		return (left_side_ht + 1);
	else
		return (right_side_ht + 1);
/*walla*/
/* tyring alt version of hieght here instead.....*/
}
