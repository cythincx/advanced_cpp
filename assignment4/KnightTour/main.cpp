#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<time.h>
#define SCALE 8
using namespace std;
int step = 0;
int directX[9] = {0,-2,-1,1,2,2,1,-1,-2};
int directY[9] = {0,1,2,2,1,-1,-2,-2,-1};
int ifLanded[ SCALE+1 ][ SCALE+1 ];
int nowX = -1;
int nowY = -1;
double totalTrys = 0 ;
int record[SCALE+1][SCALE+1];
bool finished = false;

void recursion( int , int );
bool goodStep( int , int , int );
bool allFilled();

int main(){
    clock_t start,finish;
    double totaltime;
    start=clock();
    for( int i = 0 ; i < SCALE + 1 ; i++ ){
        for( int j = 0 ; j < SCALE + 1 ; j++ ){
            ifLanded[i][j] = 0;
            record[i][j] = 0;
        }
    }
    recursion(1,1);
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"\n此程序的运行时间为"<<totaltime<<"秒！"<<endl;
    system("pause");
}

void recursion( int x, int y ){
    //nowX = x;
    //nowY = y;

    ifLanded[x][y] = 1;
    step++;
    record[x][y] = step;
    if(allFilled()){
            cout<<"get it! "<<"total trys: "<<totalTrys<<endl;
            cout<<"solution:"<<endl;
            for( int i = 0 ; i < SCALE ; i++ ) cout<<"-----";
            cout<<endl;
                for( int i = 1 ; i < SCALE + 1 ; i++ ){

                    for( int j = 1 ; j < SCALE + 1 ; j++ ){
                        cout<<setw(5)<<record[i][j];
                    }
                    cout<<endl;
                    for( int m = 0 ; m < SCALE ; m++ ) cout<<"-----";
                    cout<<endl;
                }
            finished = true;
            return;
    }
    for( int i = 1 ; i < 9 ; i++ ){
        if(!finished&&goodStep(i,x,y)) recursion( x + directX[i], y + directY[i]);
    }
    if(!finished){
        step--;
        ifLanded[x][y] = 0;
    }
    if((x==1&&y==1)&&!finished) cout<<"no solution"<<endl;
    return;
}

bool goodStep( int i, int x, int y ){
    totalTrys++;
    bool ret = false;
    int nextX = x + directX[i];
    int nextY = y + directY[i];
    if( nextX<1||nextX>SCALE||nextY<1||nextY>SCALE) return false;
    if( ifLanded[nextX][nextY] == 0 ) return true;
    return ret;
}

bool allFilled(){
    int base = 1;
     for( int i = 1 ; i < SCALE + 1 ; i++ ){
        for( int j = 1 ; j < SCALE + 1 ; j++ ){
                base *= ifLanded[i][j];
                if( base==0 ) return false;
        }
     }
     return true;
}



