#include "CYXString.h"
#include<iostream>
using namespace std;
int main(){
    CYXString c1;
    cout<<c1.length()<<" "<<c1.capacity()<<endl;
    CYXString c2("hello");
    cout<<c2.length()<<" "<<c2.capacity()<<endl;
    CYXString c3(c2);
    cout<<c3.length()<<" "<<c3.capacity()<<" "<<c3[0]<<endl;
    CYXString c4;
    c4 = c3 ;
    cout<<c4.length()<<" "<<c4.capacity()<<" "<<c4[0]<<endl;
    CYXString c5(" cyx");
    CYXString  c6 = c2 + c5;
    //c6 = c2 + c5;
    cout<<c6.length()<<" "<<c6.capacity()<<" "<<c6[1]<<endl;
    cout<<"fdsfdsf"<<endl;
    cout<<c6.capacity()<<endl;
    cin>>c6;
    cout<<c6;

}
