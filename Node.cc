#include <iostream>

#include "Node.h"

std::ostream& operator<< (std::ostream& o, const Node& n) {

    if (n != -1 ) 
        o << "[" << n.getId() << "]" ;
    else
        o << "###";

    return o;

}

bool operator!=( const Node& lhs, int rhs) {

    return lhs.getId() != rhs;
}

bool operator==( const Node& lhs, const Node& rhs) {

    int x = lhs.getId();
    int y = rhs.getId();
    std::cout << "lhs=" << x << ", rhs=" << y << std::endl;
    return lhs.getId() == rhs.getId();

}

