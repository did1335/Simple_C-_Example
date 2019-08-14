//
//  main.cpp
//  kg2lb
//
//  Created by mac on 2018/10/3.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "main.h"

using namespace std;

float kg,lb;

int main(int argc, const char * argv[]) {
    // insert code here...
    disp();
    cin  >> kg;
    trans();
    cout << "英鎊為:" << lb << endl;
    
    return 0;
}

void disp(void){
    cout << "公斤轉換為英鎊" << endl
    << "請輸入公斤:";
}

void trans(void){
    lb=kg*2.205;
}
