#include "binary_trees.h"
/**
* sorted_array_to_avl - builds an AVL tree from an array
* @array: pointer to the first element of the array to be converted
* @size: number of element in the array
* Return: pointer to the root node of the created AVL tree, or NULL on failure
*/
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root;

	if (array == NULL || size == 0)
		return (NULL);
	root = sortedArrayToAVL(array, 0, size - 1, NULL);
	return (root);
}

/**
* sortedArrayToAVL - function that build an AVL tree from an array
* @array: array to be converted
* @start: first element array index
* @end: last element array to eval
* @parent: pointer element the new node of the array
* Return: binary tree, NULL
*/
avl_t *sortedArrayToAVL(int *array, size_t start, size_t end, avl_t *parent)
{
	size_t mid;
	avl_t *root = NULL;

	/* Base Case */
	if (start > end)
		return (NULL);

	/* Get the middle element and make it root */
	mid = (start + end) / 2;
	root = binary_tree_node(parent, array[mid]);

	/* Recursively construct the*/
	/*	left subtree and make it*/
	/*	left child of root */
	if (mid != start)
		root->left = sortedArrayToAVL(array, start, mid - 1, root);

	/* Recursively construct the  */
	/*	right subtree and make it  */
	/*	right child of root */
	if (mid != end)
		root->right = sortedArrayToAVL(array, mid + 1, end, root);

	return (root);
}
/**
* binary_tree_node - creates a binary tree node
* @parent: pointer to the parent node
* @value: value to put in the new node
* Return: pointer to the new node, or NULL on failure
**/
avl_t *binary_tree_node(avl_t *parent, int value)
{
	avl_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
