#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a
 *		right-child of another node
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node.
 * Return: NULL or a pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	if (parent == NULL)
		return (NULL);

	new_n = binary_tree_node(parent, value);
	if (new_n == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_n->right = parent->right;
		parent->right->parent = new_n;
	}
	parent->right = new_n;

	return (new_n);
}
