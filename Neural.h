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
    void printinfo();
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
void layer::printinfo(){
    cout<<"Printing Layer : "<<getIndex()<<endl;

}
//The whole mesh consisting of different layers
class sequential{
private:

public:
    int LayerNumber = 0;
    vector<layer> *Layer_Array;
    void makelayer(int nodes);
    vector<double> inputlayer(int Nodes, vector<double> weights);
    vector<double> hiddenlayer(int Nodes, vector<double> weights);
    vector<double> outputlayer(int Nodes, vector<double> weights);
    void DrawMesh();
    void forward(vector<double> input_vector );
    void printmesh();
};
void sequential::makelayer(int nodes){
    layer i ;
    i = layer(LayerNumber, nodes);
    LayerNumber++;
    Layer_Array->push_back(i);
}

vector<double> sequential::inputlayer(int Nodes,vector<double> weights){
    makelayer(Nodes);
    //add bias node 1.0 to input layer
    return weights;
}
vector<double> sequential::hiddenlayer(int Nodes, vector<double> weights){
    makelayer(Nodes);
    return weights;
}
vector<double> sequential::outputlayer(int Nodes, vector<double> weights){
    makelayer(Nodes);
    return weights;
}

void DrawMesh(){

}
void sequential::forward(vector<double> input_vector ){
    for (int i = 0 ; i < LayerNumber ; i++ ) {
        if (i == 0){
            //First Layer


        }
        else if (i == LayerNumber-1) {
            //Last Layer

        }
        else {
            //Hidden Intermediate Layer


        }

    }
}
void sequential::printmesh(){
    for (int i  = 0 ; i < Layer_Array->size(); i++){
        Layer_Array->at(i).printinfo();
    }


}
