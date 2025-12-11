#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, 0 if tree is NULL or leaf
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h = 0, right_h = 0;

if (tree == NULL)
return (0);

/* Calculer la hauteur des sous-arbres gauche et droit */
if (tree->left)
left_h = 1 + binary_tree_height(tree->left);
if (tree->right)
right_h = 1 + binary_tree_height(tree->right);

/* Retourner la plus grande hauteur */
return (left_h > right_h ? left_h : right_h);
}


/**
 * binary_tree_balance - Measures the balance factor
 * @tree: Pointer to root node
 *
 * Return: Balance factor (left height - right height)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_h = 0, right_h = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_h = (int)binary_tree_height(tree->left);
if (tree->right)
right_h = (int)binary_tree_height(tree->right);

return (left_h - right_h);
}
