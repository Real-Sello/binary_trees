#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a
 *      binary tre
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;
if (tree == NULL)
{
return (0);
}
if (!tree->left && !tree->right)
return (0);
left_height = binary_tree_height(tree->left);
left_height++;
right_height = binary_tree_height(tree->right);
right_height++;
if (left_height > right_height)
{
return (left_height);
}
else
{
return (right_height);
}
}
