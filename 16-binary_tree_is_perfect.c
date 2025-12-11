#include "binary_trees.h"

/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine
 *
 * Return: Hauteur de l'arbre, 0 si tree est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}

/**
 * binary_tree_size - Mesure la taille d'un arbre binaire
 * @tree: Pointeur vers le nœud racine
 *
 * Return: Taille de l'arbre (nombre de nœuds), 0 si tree est NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 *
 * Description: Un arbre binaire est "perfect" si tous les niveaux
 * sont complètement remplis. Formule: taille = 2^(hauteur+1) - 1
 *
 * Return: 1 si l'arbre est parfait, 0 sinon ou si tree est NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;
	size_t perfect_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/* Calcul de 2^(height+1) - 1 */
	perfect_size = (1 << (height + 1)) - 1;

	return (size == perfect_size);
}
