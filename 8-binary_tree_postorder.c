#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse the tree in post order
 * @tree: the root of the tree
 * @func: a func that will be fired on the data of each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
