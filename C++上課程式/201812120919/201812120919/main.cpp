//
//  main.cpp
//  201812120919
//
//  Created by mac on 2018/12/12.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=50,*p,**pp;
    p=&n;
    pp=&p;
    *p=100;
    cout<<"p="<<p<<",*p="<<*p<<endl
    <<"pp="<<pp<<",*pp="<<*pp<<",**pp="<<**pp<<endl;
    **pp=1000;
    cout<<"n="<<n<<endl;
    return 0;
}
