#include "binary_trees.h"

/**
 * binary_tree_sibling - Trouve le frère d'un nœud
 * @node: Pointeur vers le nœud dont on cherche le frère
 *
 * Return: Pointeur vers le nœud frère
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}

/**
 * binary_tree_uncle - Trouve l'oncle d'un nœud
 * @node: Pointeur vers le nœud dont on cherche l'oncle
 *
 * Description: L'oncle d'un nœud est le frère de son parent.
 *
 * Return: Pointeur vers le nœud oncle, NULL si pas d'oncle ou node est NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
