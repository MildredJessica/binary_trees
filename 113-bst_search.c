#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree
 * @tree: Pointer to the root node of the BST to search
 * @value: Value to search in the tree
 * Return: Pointer to the node containing a value equals to value
 *          If tree is NULL or if nothing is found, your function 
 *           must return NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
bst_t *new_node = NULL;

if (tree == NULL)
return (NULL);

if (tree->n == value)
return ((bst_t *) tree);
else if (tree->n > value)
new_node = bst_search(tree->left, value);
else if (tree->n < value)
new_node = bst_search(tree->right, value);
else
return (NULL);
return (new_node);
}
