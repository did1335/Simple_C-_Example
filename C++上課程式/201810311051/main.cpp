//
//  main.cpp
//  201810311051
//
//  Created by mac on 2018/10/31.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    double y;
    for(x=-100;x<=100;x++){
        y=log((1.+exp(2*x/10.))/(1.-exp(2*x/10.)));//This function is defined in the LHP.
        cout<<"y("<<x/10.<<")="<<y<<endl;
    }

    return 0;
}

