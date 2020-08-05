#ifndef TREES_H_
#define TREES_H_
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s heap_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
heap_t *heap_insert(heap_t **root, int value);
binary_tree_t *insertNode(binary_tree_t *node, int value);
void binary_tree_print(const binary_tree_t *tree);
size_t binary_tree_length(const binary_tree_t *tree);
heap_t *insert_order(binary_tree_t *tree, int value, int idx, int n_leaf);
#endif
