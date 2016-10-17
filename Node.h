#ifndef NODE_H
#define NODE_H

class Node {

    int mId;
    int mCost;

    public:
    //Node(): mId(0), mCost(0.0) {}
    Node(int id, int cost) : mId(id), mCost(cost) {}

    int getId() const {return mId;}
    int getValue() const {return mCost;}
    friend std::ostream& operator<< (std::ostream& o, const Node*& n);
    friend bool operator==(const Node& lhs, const Node& rhs);
};



#endif

