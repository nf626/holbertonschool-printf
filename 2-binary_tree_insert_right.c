#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 *                            the right-child of another node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure
 *         or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
if (parent == NULL)
{
free(new_node);
return (NULL);
}

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;

if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
parent->right = new_node;
}
else
{
parent->right = new_node;
new_node->right = NULL;
}

return (new_node);
}
