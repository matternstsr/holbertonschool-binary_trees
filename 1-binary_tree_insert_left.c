#include "binary_trees.h"

/**
 * binary_tree_insert_left-left node
 * @parent:Pointer
 * @value: Value
 * Return: Node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (!parent)
	{
		return (NULL);
	}
	new_left_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		/*assigns the left child of the parent node to the left child of the new node*/
		/*new node take place of original left child of the parent node.*/
		new_left_node->left->parent = new_left_node;
		/*assigns the new node as the parent of the original left child of the parent node.*/
		/*original left child of parent node will become grandchild of parent node and child of new node.*/
	}
	parent->left = new_left_node;

	return (l_node);
}
