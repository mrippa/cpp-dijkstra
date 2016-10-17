#include <iostream>

#include "Node.h"

std::ostream& operator<< (std::ostream& o, const Node*& n) {

    if (&n != nullptr) 
        o << "node [" << n->getId() << "]=" ;
    else
        o << "###";

    return o;

}

bool operator==( const Node& lhs, const Node& rhs) {

    int x = lhs.getId();
    int y = rhs.getId();
    std::cout << "lhs=" << x << ", rhs=" << y << std::endl;
    return lhs.getId() == rhs.getId();

}

