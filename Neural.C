#include <iostream>
#include <typeinfo>
#include "Neural.h"
#include <vector>
using namespace std;
int main (){
    Node B;
    Node *A =new Node(3);
    //cout<<A->getweight()<<endl;
    //cout<<typeid(A).name()<<endl;
    //cout<<B.getweight()<<endl;
    B.setweight(8.99908);
    //cout<<B.getweight()<<endl;
    //cout<<typeid(B).name()<<endl;
    layer q(8, 6);
    cout<<"Index : "<<q.getIndex()<<endl;
    cout<<"Type of an element : "<<typeid(q.getNode(4)).name()<<endl;
    vector<Node> NodeArrays;
    NodeArrays = q.getNodeVector();
    cout<<"Size of Node Vector produced before append : "<<NodeArrays.size()<<endl;
    q.append(B);
    NodeArrays = q.getNodeVector();
    cout<<"Size of Node Vector produced after append: "<<NodeArrays.size()<<endl;
    q.pop();
    NodeArrays = q.getNodeVector();
    cout<<"Size of Node Vector produced after pop: "<<NodeArrays.size()<<endl;
    return 0;
}
