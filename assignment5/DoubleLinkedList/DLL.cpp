#include<iostream>
#include "Node.h"
#include "DLL.h"
#include "CYXString.h"
using namespace std;

DLL::DLL(){
    head = 0;
    tail = 0;
    nodePtr = head;
    numElements = 0;
}

DLL::DLL( const DLL & dll ){
    head = dll.head;
    tail = dll.tail;
    //nodePtr = dll.nodePtr;
    resetIteration();
    numElements = dll.numElements;
    Node tempNode;
    dll.resetIteration();



}

DLL & DLL::operator=( const DLL & dll ){
    head = dll.head;
    tail = dll.tail;
    resetIteration();
    numElements = dll.numElements;
    return *this;
}

DLL::~DLL(){
    resetIteration();
    while(nodePtr!=0){
        delete [] nodePtr;
        nodePtr = nodePtr->next;
    }
}

void DLL::resetIteration(){
    nodePtr = head;
}

void DLL::getNext(){
    nodePtr = nodePtr->next;
}

