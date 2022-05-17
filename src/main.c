#include "tree.h"


int main()
{
    //tree_t * BinaryTree = initialisation();
    tree_t * ResultTree = CreateTree("TestFiles/data.txt");
    PrintTree(ResultTree);
}
