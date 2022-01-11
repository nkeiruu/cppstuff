#include <iostream>
#include "Node.hpp"

int main(){
    std::cout << "Buzzzzz" << std::endl;
    
    //create instance of node object
    Node* newnode = new Node(7);
    delete newnode;
}