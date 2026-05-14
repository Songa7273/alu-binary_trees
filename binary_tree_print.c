#include <stdio.h>
#include "binary_trees.h"

static void print_t(binary_tree_t *tree, int space)
{
	int i;

	if (tree == NULL)
		return;

	space += 5;

	print_t(tree->right, space);

	printf("\n");
	for (i = 5; i < space; i++)
		printf(" ");
	printf("(%03d)\n", tree->n);

	print_t(tree->left, space);
}

void binary_tree_print(binary_tree_t *tree)
{
	print_t(tree, 0);
}
