#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 if NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_h, right_h;

if (tree == NULL)
return (0);

/* Si feuille, c'est parfait */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* Si un seul enfant, pas parfait */
if (tree->left == NULL || tree->right == NULL)
return (0);

/* Vérifier hauteur des sous-arbres */
left_h = (int)binary_tree_height(tree->left);
right_h = (int)binary_tree_height(tree->right);

/* Les sous-arbres doivent avoir la même hauteur et être parfaits */
if (left_h != right_h)
return (0);

return (binary_tree_is_perfect(tree->left) &&
        binary_tree_is_perfect(tree->right));
}
