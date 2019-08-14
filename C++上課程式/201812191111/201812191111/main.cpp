//
//  main.cpp
//  201812191111
//
//  Created by mac on 2018/12/19.
//  Copyright © 2018年 mac. All rights reserved.
//


#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

string tab("\t");

int main(int argc, const char * argv[]) {
    // insert code here...
    typedef struct{
        int x;
        int y;
        int z;
    }v;
    
    v t[2]={1,2,3,4,5,6};//v為自訂型態
    
    /**********各軸向分量**********/
    cout<<"t[0].x="<<t[0].x<<endl;
    cout<<"t[0].y="<<t[0].y<<endl;
    cout<<"t[0].z="<<t[0].z<<endl;
    cout<<"t[1].x="<<t[1].x<<endl;
    cout<<"t[1].y="<<t[1].y<<endl;
    cout<<"t[1].z="<<t[1].z<<endl;

    /*****************************向量****************************/
    cout<<"vector1=("<<t[0].x<<","<<t[0].y<<","<<t[0].z<<")"<<endl;
    cout<<"vector2=("<<t[1].x<<","<<t[1].y<<","<<t[1].z<<")"<<endl;

    unsigned int squ=pow(t[1].x-t[0].x,2)+pow(t[1].y-t[0].y,2)+pow(t[1].z-t[0].z,2);
    double distance=sqrt(squ);
    cout<<"distance="<<distance<<endl;
    
    return 0;
}
