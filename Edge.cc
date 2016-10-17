#include <iostream>

#include "Edge.h"
#include "Node.h"
std::ostream& operator<< (std::ostream& o, const Edge*& e) {

    o << "Edge:<" << e->getXnode() << ", "<< e->getYnode() <<">" ;
    return o;
}

