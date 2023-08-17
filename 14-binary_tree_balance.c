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
	return (left_side_ht - right_side_ht);/* return the DIFFERENCE of the heights*/
/*walla*/
}



/*already made binary_tree_height #9 */


/**
 * binary_tree_height - height of the tree
 * @tree: root node (pointer to tree)
 * Return: height#
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_side = 0;
        size_t right_side = 0;

        if (!tree)
        {
                return (0);/*if tree is empty*/
        }
        if (tree->right)/*recursively calculates the height of the right.*/
        {
                right_side = binary_tree_height(tree->right);
                right_side = right_side + 1;
        }
        if (tree->left)/*recursively calculates the height of the left.*/
        {
                left_side = binary_tree_height(tree->left);
                left_side = left_side + 1;
        }

        if (left_side > right_side)/*return the greater side*/
        {
                return (left_side);
        }
        else
        {
                return (right_side);
        }
/*walla*/
}

