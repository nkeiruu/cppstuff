class Node{
    private:
    Node* next; //pointer to next node
    int data;
    
    public:
    Node(int); // constructor
    Node();
    Node(const Node&); //copy constructor
    ~Node(); //deconstructor
    
    //helper methods
    void set_next(Node*); //allows other classes to change private class data members
    Node* get_next();
    void set_data(int);
    int get_data();
};