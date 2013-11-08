#ifndef CYXSTRING_H_INCLUDED
#define CYXSTRING_H_INCLUDED
#include<iostream>
#include<fstream>
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
char at(int);
const char at(int) const;
bool read(istream &);
void write(ostream &) const;
int compareTo( const CYXString & ) const;
const char * c_str() const;
void setEqualTo( const CYXString &);
friend void BubbleSort(CYXString cs[], int);
};



#endif // CYXSTRING_H_INCLUDED
