//
//  main.cpp
//  minimum
//
//  Created by mac on 2018/10/17.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    int x,y=20,minimum;
    cout<<"請輸入數值";
    cin>>x;
    /*
    minimum=(x<y)?x:y;
    cout<<minimum<<"比較小"<<endl;
     */
    
    (x<y)? cout<<x<<"比較小"<<endl:cout<<y<<"比較小"<<endl;
    return 0;
}
