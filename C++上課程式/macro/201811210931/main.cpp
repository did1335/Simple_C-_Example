//
//  main.cpp
//  201811210931
//
//  Created by mac on 2018/11/21.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cmath>

#define PI 3.1415926
#define PARA(B,H) B*H
#define TRAPEZOID(UB,LB,H) (UB+LB)*H/2.
#define PERIPHERY(R) (PI*2*R)
#define VOLLUMN(R) (4/3.*PI*pow(R,3))

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=3,b=4,c=5;
    cout<<"PARA(3, 4)="<<PARA(a,b)<<endl
    <<"TRAPEZOID(3, 4, 5)="<<TRAPEZOID(a,b,c)<<endl
    <<"PERIPHERY(3)="<<PERIPHERY(3)<<endl
    <<"VOLLUMN(3)="<<VOLLUMN(3)<<endl;
    return 0;
}


