/* ------------------------------------------------------------------------------------ */
/*                                  tree.c                                         */
/*                                    module                                            */
/*                                                                                      */
/*contient les initialisations des listes utilisées                                     */
/*                                                                                      */
/* ------------------------------------------------------------------------------------ */

#include "tree.h"


tree_t * initialisation()
{
    tree_t    * tree = (tree_t *) malloc(sizeof(tree_t));

    tree->value = 0;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}

tree_t * PrintTree(tree_t * tree)
{
  printf("Val | left | right \n");
  tree_t * curr = tree;
  tree_t * prec = curr;
  while (curr->left == NULL && curr->right == NULL)
  {
    printf("%d   |%d     |%d \n",curr->value, curr->left->value, curr->right->value);
  }
}

tree_t * CreateTree(char* FileName)
{
  tree_t * bst = initialisation();
  //open file
  FILE * fi = fopen(FileName, "r");
  if (fi == NULL)
  {
    printf("Error opening file !");
  }
  else
  {
    int value;
    tree_t * curr = bst;
    if(fscanf(fi, "%d", &value) != EOF) // Si le fichier n'est pas vide
    {
      bst->value = value;
      while(fscanf(fi, "%d", &value) != EOF)
      {
        if (value < curr->value)
        {
          curr->left = initialisation();
          curr->left->value = value;
          curr = curr->left;
        }
        else
        {
          curr->right = initialisation();
          curr->right->value = value;
          curr = curr->right;
        }
      }
    }
    else // Si le fichier est vide l'arbre est vide
    {
      bst->value = 0;
      printf("Arbre vide \n");
    }
  }
  return bst;
}
