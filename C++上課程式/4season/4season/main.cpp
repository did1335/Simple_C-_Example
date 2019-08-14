//
//  main.cpp
//  4season
//
//  Created by mac on 2018/10/17.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    cout<<"請輸入月份";
    cin>>x;

    switch (x) {
        case 2:
        case 3:
        case 4:
            cout<<"春天"<<endl;
            break;
        case 5:
        case 6:
        case 7:
            cout<<"夏天"<<endl;
            break;
        case 8:
        case 9:
        case 10:
            cout<<"秋天"<<endl;
            break;
        case 11:
        case 12:
        case 1:
            cout<<"冬天"<<endl;
            break;
        default:
            cout<<"輸入錯誤"<<endl;
    }
    return 0;
}
