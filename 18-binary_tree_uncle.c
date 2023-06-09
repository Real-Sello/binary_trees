#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: - pointer to the uncle node
 *         - if node is NULL, return NULL
 *         - if node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *grandparent = node->parent->parent;

if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

if (grandparent->left == NULL || grandparent->right == NULL)
return (NULL);

if (grandparent->left == node->parent)
return (grandparent->right);
else
return (grandparent->left);
}
