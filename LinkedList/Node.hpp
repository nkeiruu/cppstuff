class Node{
    private:
    Node* next; //pointer to next node
    int data;
    
    public:
    Node(int);// constructor
    Node();
    Node(const Node&);
    ~Node();
}