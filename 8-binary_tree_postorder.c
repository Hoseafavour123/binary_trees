#include "binary_trees.h"

/**
  * binary_tree_postorder - Traverses tree using post order method
  * @tree: Pointer to root node
  * @func: Function pointer
  * Return: void
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
