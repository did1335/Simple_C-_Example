//
//  main.cpp
//  F2C
//
//  Created by mac on 2018/10/3.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

float c,f;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "請輸入華氏溫度：" ;
    cin >> f;
    //c=5./9.*(f-32);    
    cout << "攝氏溫度：" << c << endl;

    return 0;
}

void trans(){
 c=5./9.*(f-32);
}
