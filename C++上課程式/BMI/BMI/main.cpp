//
//  main.cpp
//  BMI
//
//  Created by mac on 2018/10/17.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    float h,w,BMI;
    cout << "請輸入身高(m):";
    cin>>h;
    cout << "請輸入體重(kg):";
    cin>>w;
    BMI=w/h/h;

    if(BMI<=0||h<=0||w<=0)
    {
        cout<<"輸入錯誤"<<endl;
    }
    else
    {
        cout<<"BMI:"<<BMI<<endl;
        
        if(BMI<18.5){
            cout<<"體重過輕"<<endl;
        }
        else if(BMI>=24){
            cout<<"體重過重"<<endl;
        }
        else{
            cout<<"標準體重"<<endl;
        }

    }
    return 0;
}
