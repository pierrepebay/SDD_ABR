/* ------------------------------------------------------------------------------------ */
/*                                  structure.c                                         */
/*                                    module                                            */
/*                                                                                      */
/*contient les initialisations des listes utilisées                                     */
/*                                                                                      */
/* ------------------------------------------------------------------------------------ */

#include "structure.h"


tree_t * initialisation()
{
    binary_t    * Binary = (binary_t *) malloc(sizeof(binary_t));

    Binary->t = NULL;
    return Binary;

}