#ifndef CYXSTRING_H_INCLUDED
#define CYXSTRING_H_INCLUDED
#include<iostream>
using namespace std;
class CYXString{
private:
    char * str;
    int size;
    int end;
public:
CYXString();
CYXString(const char*);
int length() const;//return size;
int strsize() const;//return end;
void print() const;
};



#endif // CYXSTRING_H_INCLUDED
