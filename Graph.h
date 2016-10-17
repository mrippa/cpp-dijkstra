//******************************
//
//
//Graph.h Defines the Graph Class
//******************************

#ifndef GRAPH_H
#define GRAPH_H

#include <cstdlib>
#include <ctime>


#include <vector>
#include <iostream>
#include "Node.h"
#include "Edge.h"

namespace graph {

    //const int graph_size = 7;

    class Graph {

        //******************
        //Constructors
        public:
            Graph(std::size_t newsize=0):
                gsize(newsize),
                graph(gsize ? new bool*[gsize] :  nullptr)
                {

                    std::cout << "consructor called"<< std::endl;
                    srand(time(0));

                    for(int i=0; i<gsize; ++i) {
                        graph[i] = new bool[gsize];

                    }

                    fill();
                    setEdges();
                }


            //destructor
            ~Graph();

            //******************
            //Member Functions
            //******************
            int V ();			                // returns the number of vertices in the graph
            int E ();			                // returns the number of edges in the graph
            bool adjacent ( Node& x, Node& y);		// tests whether there is an edge from node x to node y.
            void neighbors ( Node& x);		        // lists all nodes y such that there is an edge from x to y.
            //void addEdge ( int x, int y);		// adds to G the edge from x to y, if it is not there.
            void addEdge ( const Node& x, const Node& y);		// adds to G the edge from x to y, if it is not there.
            void deleteEdge ( const Node& x, const Node& y);	// removes the edge from x to y, if it is there.
            int get_node_value ( const Node& x);		// returns the value associated with the node x.
            void set_node_value(  Node& x, int a);	// sets the value associated with the node x to a.
            int get_edge_value( Node& x, Node& y);	// returns the value associated to the edge (x,y).
            void set_edge_value ( Node& x, Node& y, double v);	// sets the value associated to the edge (x,y) to v.
            void print();
            //Edge findEdge(std::list<Edge*> elist); //Search the std::list<Edges> to find the edges with matching nodes 

        private:
            std::size_t gsize;
            std::vector<Node*> nodes;
            std::vector<Edge*> edges;
            void fill();
            void setEdges();
            bool** graph;
    };

} //namespace graph

#endif
