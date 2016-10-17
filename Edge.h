#ifndef EDGE_H
#define EDGE_H

class Edge {
    const Node* x;
    const Node* y;
    int mCost;

    public:

    Edge(const Node*& nodeX, const Node*& nodeY, int edgeCost=0)
        : x(nodeX), y(nodeY), mCost(edgeCost)
    {
    }

    friend std::ostream& operator<< (std::ostream& o, const Edge*& n);
    int getCost() const {return mCost;}
    const Node* getXnode() {return x;}
    const Node* getYnode() {return y;}

};

#endif
