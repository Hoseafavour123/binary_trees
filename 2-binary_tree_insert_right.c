#include "binary_trees.h"

/**
  * binary_tree_insert_right - Inserts a node as the right
  * child of another node
  * @parent: Parent node
  * @value: Value to insert
  * Return: the new node or NULL if their is any failure
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->right == NULL)
		parent->right = new;
	else
	{
		old = parent->right;
		parent->right = new;
		new->right = old;
	}

	return (new);
}
