//
//  main.cpp
//  201812261132
//
//  Created by mac on 2018/12/26.
//  Copyright © 2018年 mac. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
#include <iomanip>

int main(int argc, const char * argv[]) {
    // insert code here...
    /*ifstream fin;
    ofstream fout;
    fin.open("/Users/mac/Desktop/num.txt",ios::in);
    fout.open("/Users/mac/Desktop/num2.txt",ios::out);*/
    ifstream fin("/Users/mac/Desktop/num.txt",ios::in);
    ofstream fout("/Users/mac/Desktop/num2.txt",ios::out);
    
    char t[40];
    int a[5];
    double b[5],sum=0;
    
    int i=0;
    while(!fin.eof())
    {
        fin>>t;
        a[i]=atof(t);
        fin>>t;
        b[i]=atof(t);
        cout<<t<<endl;
        i++;
        
    }
    for(i=0;i<5;i++){
        sum+=b[i];
        cout<<a[i]<<"\t"<<b[i]<<endl;
        if(fout.is_open())
            fout<<a[i]<<"\t"<<b[i]<<endl;
        else
            cout<<"檔案開啟失敗"<<endl;
    }
    cout<<"sum\t"<<sum<<endl;
    fout<<"sum\t"<<sum<<endl;
    
    fin.close();
    fout.close();
    
    return 0;
}

