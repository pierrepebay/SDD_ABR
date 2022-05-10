/* ------------------------------------------------------------------------------------ */
/*                                      structure.h                                     */
/*                                         entête                                       */
/*                                                                                      */
/*entête du fichier structure.c et déclaration des structures des listes utilisées      */
/*                                                                                      */
/* ------------------------------------------------------------------------------------ */

#ifndef STRUCTURE_HEADER_
#define STRUCTURE_HEADER_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Tree
{
    int             value;
    struct tree *  left;
    struct tree *  right;

}tree_t;

typedef struct Binary
{
    tree_t  * t;

}binary_t;


#endif
