#include <iostream>
#include "tree.h"
using namespace std;

int main()
{
    Tree<int> arbol;
    arbol.push(10);
    arbol.push(19);
    arbol.push(-10);
    arbol.push(230);
    arbol.push(11230);
    arbol.push(15);
    arbol.show();
    return 0;
}
