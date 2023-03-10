#include <iostream>
#include <typeinfo>
#include "Neural.h"
#include <vector>
using namespace std;
int main (){
//     Node B;
//     Node *A =new Node(3);
//     //cout<<A->getweight()<<endl;
//     //cout<<typeid(A).name()<<endl;
//     //cout<<B.getweight()<<endl;
//     B.setweight(8.99908);
//     //cout<<B.getweight()<<endl;
//     //cout<<typeid(B).name()<<endl;
       layer q(8, 6);
       q.printinfo();
//     cout<<"Index : "<<q.getIndex()<<endl;
//     cout<<"Type of an element : "<<typeid(q.getNode(4)).name()<<endl;
//     vector<Node> NodeArrays;
//     NodeArrays = q.getNodeVector();
//     cout<<"Size of Node Vector produced before append : "<<NodeArrays.size()<<endl;
//     q.append(B);
//     NodeArrays = q.getNodeVector();
//     cout<<"Size of Node Vector produced after append: "<<NodeArrays.size()<<endl;
//     q.pop();
//     NodeArrays = q.getNodeVector();
//     cout<<"Size of Node Vector produced after pop: "<<NodeArrays.size()<<endl;

    sequential m;
    vector<double> weights;
    weights.push_back(1);
    weights.push_back(2);
    m.inputlayer(2, weights);
    weights.push_back(3);
    weights.push_back(4);
    m.hiddenlayer(4, weights);
    weights.pop_back();
    weights.pop_back();
    m.outputlayer(2, weights);
    m.printmesh();


    return 0;
}
