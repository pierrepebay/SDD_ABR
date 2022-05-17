/* ------------------------------------------------------------------------------------ */
/*                                      tree.h                                     */
/*                                         entête                                       */
/*                                                                                      */
/*entête du fichier tree.c et déclaration des structures des listes utilisées      */
/*                                                                                      */
/* ------------------------------------------------------------------------------------ */

#ifndef STRUCTURE_HEADER_
#define STRUCTURE_HEADER_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct tree
{
    int            value;
    struct tree *  left;
    struct tree *  right;

}tree_t;

tree_t * initialisation();

tree_t * PrintTree(tree_t *);

tree_t * CreateTree(char*);

#endif
