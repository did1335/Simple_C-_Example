//
//  main.cpp
//  201810310955
//
//  Created by mac on 2018/10/31.
//  Copyright © 2018年 mac. All rights reserved.
/*
 for(int x=0;x<=180;x+=10){
 a=cosd(x);
 b=sind(x);
 c=tand(x);
 cout<<"cos("<<x<<")="<<a<<"\t"<<"sin("<<x<<")="<<b<<"\t"<<"tan("<<x<<")="<<c<<"\t"<<endl;
 }*/
//

#include "user.h"
#include "Trigonometric function.hpp"

int main(int argc, const char * argv[]) {
    double x;
    double a,b,c;

    cout<<"deg=";
    cin>>x;
  
    a=cosd(x);
    b=sind(x);
    c=tand(x);
    
    cout<<"cos("<<x<<")="<<a<<endl<<"sin("<<x<<")="<<b<<endl<<"tan("<<x<<")="<<c<<endl;
    return 0;
}
