//******************************
//
//
//Graph.cc implements Graph 
//******************************
//
//
//
//******Rant********
//Told not to use this as it pollutes the namespace
//  Okay! Don't be lazy.
//using namespace std;

#include "Graph.h"

namespace graph {

    inline double prob() {

        return (double) rand() / (double)RAND_MAX;
    }


    //********Graph*************
    //  
    // Destructor
    // *************************
    Graph::~Graph() {
        std::cout << "destructor called"<< std::endl;

        if (graph != nullptr) {
            //iterate through gsize rows
            for (int i=0; i<gsize; ++i) {
                const Node* a = *(nodes.data() +i);

                for (int j=0; j<gsize; j++) {
                    const Node* b = *(nodes.data() + j);
                    if (graph[i][j] == true) //these nodes are connected, deleteEdge(i,j)
                        deleteEdge(a, b);
                }
                delete []graph[i];
            }//rows
        }
        nodes.clear();
        edges.clear();
        delete []graph;

        gsize = 0;
    }

    //*********************
    //
    // Private fill
    // ********************
    void Graph::fill() {

        for (int i=0; i<gsize; ++i) {
            Node* a = new Node(i,0);
            nodes.push_back(a); //each row represents a node
            for (int j=i; j<gsize; ++j) 
                if (i == j) 
                    graph[i][j] = false; // no loops
                    //std::cout << "g["<<i<<"]["<<j<<"]=="<<graph[i][j]<< std::endl;
                else 
                    graph[i][j] = graph[j][i] = (prob() < 0.19);

        }//for
    }

    //*********************
    //
    // Private setEdges
    // ********************
    void Graph::setEdges(){
        for (int i=0; i<gsize; ++i) {
            for (int j=i; j<gsize; ++j) {
                if (graph[i][j] == true) {
                    const Node* a = *(nodes.data()+i);
                    const Node* b = *(nodes.data()+j);
                    addEdge(a,b);
                }

            }
        }//for
    }

    //*********************
    //
    //Member Functions
    //*********************

    // returns the number of vertices in the graph
    int Graph::V (){
        return nodes.size();
    }

    // returns the number of edges in the graph
    int Graph::E (){
        return edges.size();
    }

    // tests whether there is an edge from node x to node y.
    bool Graph::adjacent ( Node& x, Node& y) {
        return false;

    }

    // lists all nodes y such that there is an edge from x to y.
    void Graph::neighbors ( Node& x){		

    }

    // adds to G the edge from x to y, if it is not there.
    //void Graph::addEdge ( int x, int y) {
    void Graph::addEdge ( const Node*& x, const Node*& y) {
        Edge* e = new Edge( x, y, 2);
        edges.push_back( e);// list of edges;
    }

    // removes the edge from x to y, if it is there.
    void Graph::deleteEdge ( const Node*& x, const Node*& y) {

        std::cout << x << std::endl;
        std::cout << y << std::endl;

        //Edge* e = edges.data();
        Edge* e;
        for(int i=0; i < edges.size() ; ++i)
            e = *(edges.data() + i);
            
            //We compare two Nodes here... see overloaded Node::operator==(...)
            if(e->getXnode() == x) 
                if(e->getYnode() == y) 
                    std::cout << "." << e << std::endl;
    }

    //Search the std::list<Edges> to find the edges with matching nodes 
    //Edge findEdge(std::list<Edge*> elist) {

    //    Edge e;

    //    edges.

    //    return e;
    //}

    // returns the value associated with the node x.
    int Graph::get_node_value ( const Node*& x){

        return x->getValue();
    }

    // sets the value associated with the node x to a.
    void Graph::set_node_value(  Node& x, int a){

    }

    // returns the value associated to the edge (x,y).
    int Graph::get_edge_value( Node& x, Node& y) {

        return -1;
    }

    // sets the value associated to the edge (x,y) to v.
    void Graph::set_edge_value ( Node& x, Node& y, double v) {

    }

    //Print the graph
    void Graph::print() {
        for(int r=0; r<gsize; ++r) {
            for(int c=0; c<gsize; ++c)
                std::cout << graph[r][c] <<  " " ;
            std::cout << std::endl;
        }

    }

}// namespace graph
