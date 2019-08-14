//
//  main.cpp
//  compute
//
//  Created by mac on 2018/10/3.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=100;
    bool b;
    float pi=3.1415926;
    char ch='a';
    cout << "before compute, a=" << a << endl;
    a=a+900;
    b=a+=2>1000; //成立為真；不成立為假
    cout << "after compute, a=" << a << endl
         << "b=" << b << endl;    
    return 0;
}
