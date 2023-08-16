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
		/*assigns left chld of parent node to left child of new node*/
		/*new node take place of original left child of the parent node.*/
		new_left_node->left->parent = new_left_node;
		/*assigns new node as parent of original left child of parent node.*/
		/*orig left chld of par node will be gchild of par node & chld of new node.*/
	}
	parent->left = new_left_node;
	return (new_left_node);
}
