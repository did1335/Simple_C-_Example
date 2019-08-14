//
//  new.cpp
//  201901021126
//
//  Created by mac on 2019/1/2.
//  Copyright © 2019年 mac. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class area{
private:
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
    
public:
    void set(double ww,double ll)
    {
        w=ww;
        l=ll;
    }
    
    void set2(double rr)
    {
        r=rr;
    }
    
    void show(){
        cout<<"area="<<a(w, l)<<endl;
    }
    
    void showc(){
        cout<<"area of circle="<<cir(r)<<endl;
    }
    
};
