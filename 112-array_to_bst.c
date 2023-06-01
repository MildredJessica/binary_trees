#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: Pointer to the first element of the array to be converted
 * @size: Number of element in the array
 * Return: Pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
bst_t *node = NULL;
size_t i = 0;

if (size <= 0 || array == NULL)
return (NULL);
for (; i < size; i++)
bst_insert(&node, array[i]);
return (node);
}
