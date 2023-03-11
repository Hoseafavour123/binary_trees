#include "binary_trees.h"

/**
  * binary_tree_is_leaf - Checks if a node is a leaf
  * @node: The node to check
  * Return: 1 if is leaf, 0 otherwise
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL) && (node->Right == NULL)
		return (1);
	else
		return (0);
}
