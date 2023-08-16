#include "binary_trees.h"

/**
 * binary_tree_insert_right-right node
 * @parent:Pointer
 * @value: Value
 * Return: Node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (!parent)
	{
		return (NULL);
	}
	new_right_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		/*assigns right chld of parent node to right child of new node*/
		/*new node take place of original right child of the parent node.*/
		new_right_node->right->parent = new_right_node;
		/*assigns new node as parent of original right child of parent node.*/
		/*orig right chld of par node will be gchild of par node & chld of new node.*/
	}
	parent->right = new_right_node;
	return (new_right_node);
}
