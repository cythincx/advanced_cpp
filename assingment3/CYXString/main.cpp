#include "CYXString.h"
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

void evenFunction( ostream & ostr , CYXString cs);
void oddFunction( CYXString & cs);

int main(){
    /*CYXString c1;
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
    cout<<c6;*/

    CYXString combinationString;
    ifstream is;
    is.open("infile.txt");
    CYXString c7;
    int i = 0 ;
    ofstream os;
    os.open("outfile1.txt",ios::app);
    ofstream oscom;
    oscom.open("outfile2.txt",ios::app);
    while(is>>c7){
        i++;
        i = i%5;
        combinationString = combinationString + c7;
        if( i==0 ){
            evenFunction( os , combinationString );
            oddFunction( combinationString );
            oscom<<combinationString<<" "<<combinationString.length()<<":"<<combinationString.capacity()<<"\n";
            CYXString c8;
            combinationString = c8;
        }
    }
    oscom.close();
    os.close();

}

void evenFunction( ostream & ostr , CYXString cs){
    for( int i = 0 ; i < cs.length() ; i+=2 )
        cs[i]='~';
    //ostr.open("outfile1.txt",ios::app);
    ostr<<cs<<" "<<cs.length()<<":"<<cs.capacity()<<"\n";
    //ostr.close();

}

void oddFunction( CYXString & cs){
    for( int i = 1 ; i < cs.length() ; i+=2 )
        cs[i] = '!';
}
