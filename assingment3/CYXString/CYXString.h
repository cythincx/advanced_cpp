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
    CYXString( const char *);
    CYXString( const CYXString &);
    ~CYXString();
    CYXString & operator=( const CYXString & );
    int length() const;
    int capacity() const;
    char & operator[]( int );
    const char & operator[]( int ) const;
    CYXString  operator+( const CYXString & );
    friend istream & operator>>( istream & , CYXString & );
    friend ostream & operator<<( ostream & , CYXString & );
};



#endif // CYXSTRING_H_INCLUDED
