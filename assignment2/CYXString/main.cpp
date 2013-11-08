#include "CYXString.h"
#include<iostream>
#include<sstream>
using namespace std;
int main(){
    CYXString cyxstring;
    cout<<cyxstring.strsize()<<endl;
    CYXString cyxstring2("hello");
    cout<<"cyxstring2: "<<cyxstring2.strsize()<<" "<<cyxstring2.length()<<endl;
    cout<<"cyxstring2: ";
    cyxstring2.print();
    cout<<"\n"<<cyxstring2.at(0)<<endl;
    const CYXString cyxstring3("nihao");
    cout<<"cyxstring3: "<<cyxstring3.at(0)<<endl;
    /*cyxstring2.read(cin);
    cyxstring2.print();*/
    //char * x = new char[99];
    //istream ist("fdlsfjldjgdslf");
    //cin>>x;
    //cyxstring2.read();
    /*string st("jfdlsfjld");
    istringstream iss(st);
    cyxstring2.read(iss);
    cout<<"cyxstring2: ";
    cyxstring2.print();
    cout<<endl;
    istream & is = cin;
    char * char1 = new char[99];

    cyxstring2.read(cin);
    cout<<"cyxstring2: ";
    cyxstring2.write(cout);
    cout<<endl;*/

    CYXString cyxstring4("hEllo");
    CYXString cyxstring5("hELlo");
    cout<<cyxstring4.compareTo(cyxstring5);

    CYXString cstr[530];
    ifstream icin;
    icin.open("textfile.txt");
    char * chr = new char[99];
    int i = 0 ;
    while(cstr[i].read(icin)){
        //cstr[i].read(icin);
        i++;
        //cout<<chr;
        //cout<<" ";
        //if(i%7==0) cout<<"\n";
    }

    BubbleSort(cstr,530);
    //cstr[529].write(cout);
    icin.close();
    i=0;
    while(i<530){

        cstr[i].write(cout);
        cout<<" ";
        i++;
        if(i%7==0) cout<<"\n";
    }

    ofstream ocout;
    ocout.open("outputfile.txt",ios::app);
    i = 0;
    while( i < 530){

        cstr[i].write(ocout);
        ocout<<" ";
        i++;
        if(i%7==0) ocout<<"\n";
    }
    ocout.close();

}
