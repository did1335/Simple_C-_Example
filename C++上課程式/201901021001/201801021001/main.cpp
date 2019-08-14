//
//  main.cpp
//  201801021001
//
//  Created by mac on 2019/1/2.
//  Copyright © 2019年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    /*ofstream fout("/Users/mac/Desktop/text1.dat",ios::binary);
    double x=0.0,y;
    
    for(int i=1;i<=10;i++)
    {
        y=sqrt(2*x);
        fout.write((char*)&y,sizeof(y));
        x+=0.5;
    }
    
    cout<<"二進位資料寫入完成"<<endl;*/
     ifstream fin("/Users/mac/Desktop/text1.txt",ios::binary);
     double x=0.0,y;
     
     for(int i=1;i<=10;i++)
     {
      fin.read((char*)&y,sizeof(y));
      cout<<y<<endl;
      x++;
     }
     
     cout<<"二進位資料讀取完成"<<endl;
    fin.close();
    return 0;
}


