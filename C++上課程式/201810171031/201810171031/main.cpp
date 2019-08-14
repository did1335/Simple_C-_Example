//
//  main.cpp
//  201810171031
//
//  Created by mac on 2018/10/17.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string str,psd;
    cout<<"請輸入帳號:";
    cin>>str;
    if (str=="3A511021")
    {
        cout<<"請輸入密碼:";
        cin>>psd;
        if(psd=="1234")
        {
            cout<<"身份確認"<<endl;
        }
        else
        {
            cout<<"密碼輸入錯誤"<<endl;
        }
    }
    else
    {
        cout<<"帳號輸入錯誤"<<endl;
    }
    return 0;
}
