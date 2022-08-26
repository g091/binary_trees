#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child
 *		of another node.
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: a pointer or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	if (parent == NULL)
		return (NULL);

	new_n = malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->n = value;
	new_n->parent = parent;
	new_n->right = NULL;
	new_n->left = parent->left;
	parent->left = new_n;
	if (new_n->left)
		new_n->left->parent = new_n;
	return (new_n);
}
