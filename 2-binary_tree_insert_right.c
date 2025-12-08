#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if(parent == NULL)
    {
        return NULL;
    }

    if(new_node == NULL)
    {
        return NULL;
    }
    new_node->n = value;
    
    if (parent->right != NULL)
    {
        new_node->right = parent->left;
        parent->right = new_node;
    }
    else 
    {
        parent->right = new_node;
    }

    parent->right = new_node;
    return new_node;
}
