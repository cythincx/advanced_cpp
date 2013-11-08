#include "CYXString.h"
#include<iostream>
using namespace std;
CYXString::CYXString(){
    size = 20;
    end = 0;
    str = new char[size];
    str[0]='\0';
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
    str[i]='\0';
}

void CYXString::print() const{
    cout<<str;
}

char CYXString::at( int index ){
    return str[index];
}

const char CYXString::at( int index ) const{
    return str[index];
}

bool CYXString::read(istream & istr){
    char * temp = new char[99];
    string test;
    bool ret = false;
    ret = (istr >> temp);
    if(end!=0){
        delete [] str;
    }
    int i = 0 ;
    while(temp[i]!='\0'){
        i++;
    }
    end = i;
    int strsize = i/20+1;
    size = strsize * 20;
    str = new char[size];
    i = 0;
    while(temp[i]!='\0'){
        str[i] = temp[i];
        i++;
    }
    str[i]='\0';
    return ret;
}

void CYXString::write( ostream & ostr ) const {
    ostr<<str;
}

int CYXString::compareTo( const CYXString & mstr) const{
    int ret = 0;
    ret = end==mstr.end?0:(end<mstr.end?-1:1);
    if(ret!=0) return ret;
    int len = end;
    for( int i = 0 ; i < end; i++ ){
        if(str[i]!=mstr.str[i])
        {
            if(((int)str[i]>=65&&(int)str[i]<=90)&&((int)mstr.str[i]>=97&&(int)mstr.str[i]<=122)) return 1;
            if(((int)mstr.str[i]>=65&&(int)mstr.str[i]<=90)&&((int)str[i]>=97&&(int)str[i]<=122)) return -1;
            if(str[i]<mstr.str[i]) return -1;
            else return 1;
        }
    }
    return 0;
}

const char * CYXString::c_str() const{
    return str;
}

void CYXString::setEqualTo( const CYXString & mstr){
    delete [] str;
    size = mstr.size;
    end = mstr.end;
    str = new char[size];
    for( int i = 0 ; i < end; i++ ){
        str[i] = mstr.str[i];
    }
    str[end]='\0';
}

void BubbleSort(CYXString cstr[], int num){
    CYXString temp;
    for( int i = num ; i >0 ; i-- ){
        for( int j = num-1 ; j > num-i ; j-- ){
                if(cstr[j].length()!=0){
                    if(cstr[j].compareTo(cstr[j-1])<0){
                        temp.setEqualTo(cstr[j]);
                        cstr[j].setEqualTo(cstr[j-1]);
                        cstr[j-1].setEqualTo(temp);
                    }
                }
        }
    }
}
