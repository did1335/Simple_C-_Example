//
//  main.cpp
//  mod
//
//  Created by mac on 2018/10/24.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=1;
    while (1){
        n++;
        if(n%3==2 && n%5==4 && n%7==5)
            break;
    }
    cout<<"n="<<n<<endl;
    return 0;
}

/*
 int n=1;
 while (!(n%3==2 && n%5==4 && n%7==5)) //三三一數剩２，五五一數剩４，七七一數剩5
 {
 n++;
 }
 cout<<"n="<<n<<endl;
 */
