#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: - pointer to the sibling node
 *         - If node is NULL or the parent is NULL, return NULL
 *         - If node has no sibling, return NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

binary_tree_t *sibling;
if (node->parent->left == node)
sibling = node->parent->right;
else
sibling = node->parent->left;

return (sibling);
}
