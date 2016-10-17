#include <iostream>
#include <vector>

#include "Edge.h"
int main () {

    Edge e1 = Edge(1,1,1);
    Node n1 = Node(2,2);
    Node n2 = Node(2,2);
    
    Edge e2 = Edge(n1,n2);
    std::vector<Edge> edges = {e1, e2};

    Edge e3 = Edge(2,2,2);
    edges.push_back(e3);
    
    for(auto i : edges)
        std::cout << i << std::endl;


}
