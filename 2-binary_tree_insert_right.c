#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as a right child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL || parent == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}
else
new_node->right = NULL;
parent->right = new_node;
new_node->left = NULL;
return (new_node);
}
