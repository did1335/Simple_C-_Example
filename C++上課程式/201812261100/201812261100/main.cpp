//
//  main.cpp
//  201812261100
//
//  Created by mac on 2018/12/26.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    ifstream fin;
    ofstream fout;
    fin.open("/Users/mac/Desktop/num.txt",ios::in);
    fout.open("/Users/mac/Desktop/num2.txt",ios::out);
    
    char t[40];
    double b[6];
    
    int i=0;
    while(!fin.eof())
    {
        fin>>t;
        b[i]=atof(t);
        cout<<t<<endl;
        i++;
        
    }
    for(i=0;i<6;i++){
        cout<<"b["<<i<<"]="<<b[i]<<endl;
        if(fout.is_open())
            fout<<b[i]<<endl;
        else
            cout<<"檔案開啟失敗"<<endl;
    }
    
    fin.close();
    fout.close();
    
    return 0;
}

