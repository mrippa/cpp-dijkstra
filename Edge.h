#ifndef EDGE_H
#define EDGE_H

#include "Node.h"
class Edge {
    const Node x;
    const Node y;
    int mCost;

    public:

    Edge(): x(), y(), mCost(0) {}
    Edge(int node1, int node2, int c): x(node1), y(node2), mCost(c) {}
    Edge(const Node& nodeX, const Node& nodeY, int edgeCost=0)
        : x(nodeX), y(nodeY), mCost(edgeCost) {}

    friend std::ostream& operator<< (std::ostream& o, const Edge& n);
    int getCost() const {return mCost;}
    const Node& getXnode() const {return x;}
    const Node& getYnode() const {return y;}

};

#endif
