//
//  new.cpp
//  201801021047
//
//  Created by mac on 2019/1/2.
//  Copyright © 2019年 mac. All rights reserved.
//
#include <cmath>
#include <cstdlib>
#include <iostream>

class area{
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
    
};
