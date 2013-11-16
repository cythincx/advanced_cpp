#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include<iostream>
#include "CYXString.h"
using namespace std;
class Node{
public:
    CYXString data;
    Node * next;
    Node * prev;
    Node();
    Node(CYXString);
};



#endif // NODE_H_INCLUDED
