#include "CYXString.h"
#include<iostream>
using namespace std;
int main(){
    CYXString cyxstring;
    cout<<cyxstring.strsize()<<endl;
    CYXString cyxstring2("hello");
    cout<<"cyxstring2: "<<cyxstring2.strsize()<<" "<<cyxstring2.length()<<endl;
    cout<<"cyxstring2: ";
    cyxstring2.print();
}
