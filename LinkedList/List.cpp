#include "List.hpp"

List::List(){
    this->size = 0;
    this->head = nullptr; // helps eliminate ambiguity 
    this->tail = nullptr;

}
List::Append(int data){
    Node* newnode = new Node(data); //creating new node
    if(this->head == nullptr && this->tail == nullptr){
        this->head = newnode;
        this->tail = newnode;
        this->size++;

    }
    else if(this->head == this->tail){
        this->head->set_next(newnode);
        this->tail = newnode;
        this->size++;
    }


}