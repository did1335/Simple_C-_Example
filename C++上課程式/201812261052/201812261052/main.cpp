//
//  main.cpp
//  201812261052
//
//  Created by mac on 2018/12/26.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    ifstream fin;
    ofstream fout;
    fin.open("/Users/mac/Desktop/text1.txt",ios::in);
    fout.open("/Users/mac/Desktop/text1_data.txt",ios::out);

    char t[40];
    
    while(!fin.eof())
    {
        fin>>t;
        cout<<t<<endl;
        if(fout.is_open())
            fout<<t<<endl;
        else
            cout<<"檔案開啟失敗"<<endl;
    }
    fin.close();
    fout.close();
    
    return 0;
}
