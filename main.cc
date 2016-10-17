//******************************
//
//
//******************************
//
//

#include <iostream>

//using namespace std;
#include "Graph.h"

using namespace graph;
int main() {

    Graph* g = new Graph(7);

    g->print();

    std::cout << g->V() << std::endl;
    std::cout << g->E() << std::endl;

    delete g;

}
