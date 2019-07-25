//
//  main.cpp
//  201810310955
//
//  Created by mac on 2018/10/31.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"
#include "Trigonometric function.hpp"
int main(int argc, const char * argv[]) {
    int x;
    double y;
 /*   for(x=0;x<=M_PI;x+=0.01){
        y=(1+2*sin(x)*cos(x))/(pow(cos(x),2)-pow(sin(x),2));
        cout<<"y("<<x<<")="<<y<<endl;
    }
 */
    for(x=0;x<=180;x+=10){
        y=(1+2*sind(x)*cosd(x))/(pow(cosd(x),2)-pow(sind(x),2));
        cout<<"y("<<x<<")="<<y<<endl;
    }
    
    return 0;
}
