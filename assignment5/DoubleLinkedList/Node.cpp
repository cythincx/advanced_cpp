#include "Node.h"
#include<iostream>
using namespace std;
Node::Node(){
    data = CYXString();
    next = 0;
    prev = 0;
}
Node::Node(CYXString cs){
    data = cs;
    next = 0;
    prev = 0;
}
Node::Node( const Node & node){
}
