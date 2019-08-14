//
//  main.cpp
//  201812121022
//
//  Created by mac on 2018/12/12.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;
void chg(int *a,int *b);


int main(int argc, const char * argv[]) {
    // insert code here...
    int a=10,b=20,&ref=a,*ptr;//參照一定要有&符號
    ptr=&b;
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    cout<<ref<<"+"<<*ptr<<"="<<ref+*ptr<<endl;
    return 0;
}
