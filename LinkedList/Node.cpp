#include "Node.hpp"

Node::Node(int in_data){
    this->data = in_data;
    this->next = nullptr;
}

Node::Node(){
    this->data = 0;
    this->next = nullptr;
}

Node::Node(const Node& buzz){
    this->data = buzz.data;
    this->next = buzz.next;
}

Node::~Node() {}

void Node::set_next(Node* element){
    this->next = element;
}

Node* Node::get_next(){
    return this->next;
}

void Node::set_data(int input){
    this->data = input;
}

int Node::get_data(){
    return this->data;
}
