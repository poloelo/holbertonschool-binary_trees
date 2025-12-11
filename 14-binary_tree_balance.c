#include "binary_trees.h"

/**
 * binary_tree_height_balance - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine
 *
 * Return: Hauteur de l'arbre, 0 si tree est NULL
 */
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height_balance(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height_balance(tree->right);

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}

/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre
 *
 * Return: Facteur d'équilibre, 0 si tree est NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height_balance(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height_balance(tree->right);

	return (left_height - right_height);
}
