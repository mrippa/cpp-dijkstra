#include <iostream>

#include "Edge.h"
std::ostream& operator<< (std::ostream& o, const Edge& e) {

    const Node n1 = e.getXnode();
    o << "Edge:<" << n1 << ", "<< e.getYnode() <<": "<< e.getCost()<<">" ;
    return o;
}

