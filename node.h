#ifndef NODE_H
#define NODE_H

#include <string>

class Node {
    int data;
    std::string value;

    Node* left;
    Node* right;
    Node* parent;

    public:
        // constructors
        Node(std::string, int);
        Node(std::string, int, Node, Node, Node);

        // role in tree
        bool is_leaf();
        bool is_root();
        bool is_internal();

        // data access
        int get_data();
        std::string get_value();

        // operators
        bool operator<(Node &rhs);

};

#endif