#include "binary_trees.h"


/**
 * binary_tree_insert_left - Insert to the left of the binary tree
 * @parent: parent of the tree
 * @value: Value to insert
 * Return: New Node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL || parent == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;
if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
else
new_node->left = NULL;
parent->left = new_node;
new_node->right = NULL;
return (new_node);
}
