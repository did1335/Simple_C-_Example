//
//  main.cpp
//  201812260941
//
//  Created by mac on 2018/12/26.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ofstream fout;
    fout.open("/Users/mac/Desktop/text.txt",ios::out);
    int a=100;
    if(fout.is_open())
    {
        fout<<"123456"<<endl;
        fout<<"abcdefg"<<endl;
        fout<<a<<endl;
        cout<<"字串輸入完畢"<<endl;
    }
    else
        cout<<"檔案開啟失敗"<<endl;
    fout.close();
    
    return 0;
}
