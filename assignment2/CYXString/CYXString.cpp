#include "CYXString.h"
#include<iostream>
using namespace std;
CYXString::CYXString(){
    size = 20;
    end = 0;
    str = new char[size];
}

int CYXString::length() const{
   return end;
}

int CYXString::strsize() const{
    return size;
}

CYXString::CYXString(const char * cstr){
    int i = 0 ;
    while(cstr[i]!='\0'){
        //str[i]=cstr[i];
        i++;//i为'\0'之前的字符的数目
    }
    end = i;
    int strsize = i/20+1;
    size = strsize * 20;
    str = new char[size];
    i = 0;
    while(cstr[i]!='\0'){
        str[i]=cstr[i];
        i++;
    }
}

void CYXString::print() const{
    cout<<str;
}
