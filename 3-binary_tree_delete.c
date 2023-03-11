#include "binary_trees.h"

/**
  * delete_left - Deletes the left nodes of tree
  * @parent: the parent
  *
  * Return: void
  */
void delete_left(binary_tree_t *parent)
{
	if (parent == NULL)
		return;
	delete_left(parent->left);
	if (parent->right != NULL)
		free(parent->right);
	free(parent);
}

/**
  * delete_right - Deletes all nodes to the right of tree
  * @parent: parent node
  * Return: nothing
  */
void delete_right(binary_tree_t *parent)
{
	if (parent == NULL)
		return;
	delete_right(parent->right);
	if (parent->left != NULL)
		free(parent->left);
	free(parent);
}

/**
  * binary_tree_delete - Deletes an entire binary tree
  * @tree: Th root node of tree
  * Return: void
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	delete_left(tree->left);
	delete_right(tree->right);

	free(tree);
}
