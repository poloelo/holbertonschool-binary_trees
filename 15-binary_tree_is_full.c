#include "binary_trees.h"

/**
 * binary_tree_is_full - Vérifie si un arbre binaire est complet
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 *
 * Description: Un arbre binaire est "full" si chaque nœud a soit
 * 0 enfant (feuille) soit exactement 2 enfants.
 *
 * Return: 1 si l'arbre est full, 0 sinon ou si tree est NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Si c'est une feuille (pas d'enfants), c'est full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si un seul enfant existe, ce n'est pas full */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Si les deux enfants existent, vérifier récursivement */
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
