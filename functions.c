/* ------------------------------------------------------------------------------------ */
/*                                  functions.c                                         */
/*                                       module                                         */
/*                                                                                      */
/*contient les différentes fonctions qui interagissent avec les structures de données   */
/*                                                                                      */
/* ------------------------------------------------------------------------------------ */

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>




void CreateTree(char* FileName)
{
    //open file
    FILE * fi = fopen("input.txt", "r");
    if (fo == NULL)
    {
            printf("Error opening file !")
            return 1;
    }
    else
    {
        tree_t * root = NULL;
        int value;
        while(fscanf(fi, "%d", &value) != EOF)
        {
            if (root == NULL)
            {
                root->value = value;
            }
            else
            {
                
            } 
        }


    }

}

