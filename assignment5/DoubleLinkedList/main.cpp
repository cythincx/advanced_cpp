#include<iostream>
#include "CYXString.h"
#include "Node.h"
using namespace std;
int main(){
    const CYXString cs1("hello");
    CYXString cs2("hellO");
    cout<<(cs1==cs2)<<endl;
    cout<<(cs1<cs2)<<endl;
    cout<<(cs1>cs2)<<endl;
    cout<<(cs1!=cs2)<<endl;
    Node n(cs1);
    cout<<n.data<<endl;

}
