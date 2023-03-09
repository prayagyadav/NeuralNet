#include <iostream>
#include <vector>
using namespace std;



//Node
class Node {
    private:
        double weight;
    public:
        //Declarations of all the constructors,destructors,getters,setters and other functions
        Node(double w);
        Node();
        ~Node();
        double getweight();
        void setweight(double w);


};
Node::Node(double w){ //constructor
    weight = w;
}
Node::Node(){ //Default constructor
    weight = 0;
}
Node::~Node(){

}
double Node::getweight(){ //A getter
    return weight;
}
void Node::setweight(double w){ //A setter
    weight = w;
}

//Layer of nodes
//Inherits from nodes
class layer {
private:
    int indexID;
    vector<Node> NodeArray;
public:
    layer();
    layer(int index , int nodes );
    int getIndex();
    void setIndex(int i);
    vector<Node> getNodeVector();
    Node getNode(int i);
    void append(Node m); //at a node at the end
    void pop(); //delete a node from the end
};
layer::layer(){


}
layer::layer(int index , int nodes ){
    indexID = index;
    for (int i = 0 ; i < nodes ; i++){
        Node n;
        NodeArray.push_back(n);
    }
}
int layer::getIndex(){
    return indexID;

}
void layer::setIndex(int i){
    indexID = i;
}
vector<Node> layer::getNodeVector(){
    return NodeArray;
}
Node layer::getNode(int i){
    Node a;
    if(i > NodeArray.size() ){
        cerr<<"Out of Range value given to access the Node!"<<endl;
    }
    else {
        a = NodeArray[i];
    }
    return a;
}
void layer::append(Node m){
    NodeArray.push_back(m);
}
void layer::pop(){
    NodeArray.pop_back();
}

//The whole mesh consisting of different layers
class sequential{
private:

public:
  layer toplayer(int Nodes);
};
layer sequential::toplayer(int Nodes){

}
