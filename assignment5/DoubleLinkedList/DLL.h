#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include<iostream>
#include "Node.h"
#include "CYXString.h"
using namespace std;
class DLL{
private:
    Node * head;
    Node * tail;
    Node * nodePtr;
    int numElements;
public:
DLL();
DLL( const DLL & );
DLL & operator=( const DLL & );
~DLL();
friend ostream & operator<<(ostream & , const DLL &);
bool insert( const CYXString & );
bool remove( const CYXString & );
};



#endif // DLL_H_INCLUDED
