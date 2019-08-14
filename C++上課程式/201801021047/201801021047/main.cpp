//
//  main.cpp
//  201801021047
//
//  Created by mac on 2019/1/2.
//  Copyright © 2019年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "new.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    /*class area{
    public:
        char id;
        double w;
        double l;
        double r;
        
        double a(double w,double l)
        {
            return w*l;
        }
        
        double cir(double r)
        {
            return pow(r,2)*M_PI;
        }
        
    };*/
    
    area a1;
    area a2;
    a1.l=100;
    a1.w=200;
    a1.id='a';
    a2.r=10;
    cout<<"area1="<<a1.a(a1.l,a1.w)<<endl;
    cout<<"area2="<<a2.cir(a2.r)<<endl;

    return 0;
}
