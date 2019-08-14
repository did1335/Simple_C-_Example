//
//  main.cpp
//  201812121016
//
//  Created by mac on 2018/12/12.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=10,b=20;
    cout<<"1.a="<<a<<",b="<<b<<endl;
    chg(&a, &b);
    cout<<"3.a="<<a<<",b="<<b<<endl;
    return 0;
}
