#include "CYXString.h"
#include<iostream>
#include<fstream>
using namespace std;
CYXString::CYXString(){
    size = 20;
    end = 0;
    str = new char[20];
    str[0] = '\0';
}

CYXString::CYXString(const char * ch){
    int i = 0;
    while(ch[i]!='\0') i++;
    end = i;
    int len = end/20+1;
    size = 20 * len;
    str = new char[size];
    for( int j = 0 ; j < end ; j++ ){
        str[j] = ch[j];
    }
    str[end] = '\0';
}

CYXString::CYXString( const CYXString & cs){
    delete [] str;
    end = cs.length();
    size = cs.capacity();
    str = new char[size];
    for( int i = 0 ; i < end ; i++ ) str[i] = cs[i];
    str[end] = '\0';
}

CYXString::~CYXString(){
    delete [] str;
}

CYXString & CYXString::operator=( const CYXString & cs){
    delete [] str;
    end = cs.length();
    size = cs.capacity();
    str = new char[size];
    for( int i = 0 ; i < end ; i++ ) str[i] = cs[i];
    str[end] = '\0';
    return *this;
}

int CYXString::length() const{
    return end;
}

int CYXString::capacity() const{
    return size;
}

char & CYXString::operator[]( int index ){
    return str[index];
}

const char & CYXString::operator[]( int index ) const{
    return str[index];
}


CYXString CYXString::operator+( const CYXString & cs){
    int nowend = end + cs.length();
    int len = nowend/20 + 1;
    int nowsize = 20 * len;
    char * ch = new char[nowsize];
    for( int i = 0 ; i < end ; i++ ) ch[i] = str[i];
    for( int i = 0 ; i < cs.length() ; i++ ) ch[end+i] = cs[i];
    ch[nowend] = '\0';
    CYXString temp(ch);
    return temp;
}

istream & operator>>( istream & is , CYXString & cs ){
    char * ch = new char[500];
    is>>ch;
    //cs( ch );
    //cs = new CYXString(ch);
    CYXString test(ch);
    cs = test;
    return is;
}

ostream & operator<<( ostream & os , CYXString & cs ){
    os<<cs.str;
    return os;
}

bool CYXString::operator==( const CYXString & cs ){
    if(end!=cs.length()) return false;
    for( int i = 0 ; i < end ; i++ ){
        if(str[i]!=cs[i]) return false;
    }
    return true;
}

bool CYXString::operator==( const CYXString & cs) const{
    if(end!=cs.length()) return false;
    for( int i = 0 ; i < end ; i++ ){
        if(str[i]!=cs[i]) return false;
    }
    return true;
}

bool CYXString::operator<( const CYXString & cs){
    if(this->operator==(cs)) return false;
    if(end<cs.length()) return true;
    for( int i = 0 ; i < end; i++ ){
        if(str[i]!=cs[i])
        {
            if(((int)str[i]>=65&&(int)str[i]<=90)&&((int)cs[i]>=97&&(int)cs[i]<=122)) return false;
            if(((int)cs[i]>=65&&(int)cs[i]<=90)&&((int)str[i]>=97&&(int)str[i]<=122)) return true;
            if(str[i]<cs[i]) return true;
            else return false;
        }
    }
    return false;
}

bool CYXString::operator<( const CYXString & cs) const {
    if(this->operator==(cs)) return false;
    if(end<cs.length()) return true;
    for( int i = 0 ; i < end; i++ ){
        if(str[i]!=cs[i])
        {
            if(((int)str[i]>=65&&(int)str[i]<=90)&&((int)cs[i]>=97&&(int)cs[i]<=122)) return false;
            if(((int)cs[i]>=65&&(int)cs[i]<=90)&&((int)str[i]>=97&&(int)str[i]<=122)) return true;
            if(str[i]<cs[i]) return true;
            else return false;
        }
    }
    return false;
}

bool CYXString::operator>(const CYXString & cs){
    if(*this==cs) return false;
    if(*this<cs) return false;
    return true;
}

bool CYXString::operator>(const CYXString & cs) const {
    if(*this==cs) return false;
    if(*this<cs) return false;
    return true;
}

bool CYXString::operator!=(const CYXString & cs){
    if(*this==cs) return false;
    return true;
}

bool CYXString::operator!=(const CYXString & cs) const {
    if(*this==cs) return false;
    return true;
}
