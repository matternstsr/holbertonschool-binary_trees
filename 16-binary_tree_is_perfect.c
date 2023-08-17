#include "binary_trees.h"

/**
 * binary_tree_is_perfect-function that checks if a binary tree is perfec
 * @tree: Is the pointer to the binary tree
 * Return: If is perfect 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_size(tree->left);
	right_h = binary_tree_size(tree->right);

	if (binary_tree_is_full(tree) && left_h == right_h)
		return (1);
	return (0);
}






/*already written functions*/

/**
 * binary_tree_size - determines size of a the provided tree
 * @tree: root node? seems different no sure how to explaine
 * Return: tree's size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t leftnode = NULL, rightnode = NULL;

	if (!tree)
		return (0);

	if (tree->left)
		leftnode = tree->left;
	if (tree->right)
		rightnode = tree->right;

	return (binary_tree_size(leftnode) + 1 + binary_tree_size(rightnode));
}




/**
 * binary_tree_is_full-checks if the tree is full of kiddos
 * @tree: points to tree
 * Return: 1 if is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)/*not a tree get out*/
		return (0);

	if (!tree->left && !tree->right) /*if no kiddos return that its full*/
		return (1);

	if ((tree->left) && (tree->right))/* if you have kiddos on both*/
		return (binary_tree_is_full(tree->left)/* recur till complete*/
			&& binary_tree_is_full(tree->right));/* recur till complete*/
	return (0);
/*walla*/
/**leftnode*rightnode*/
}
