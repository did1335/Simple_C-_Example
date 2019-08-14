//
//  main.cpp
//  201901020939
//
//  Created by mac on 2019/1/2.
//  Copyright © 2019年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ifstream fin("/Users/mac/Desktop/text1.txt",ios::in);
    ofstream fout("/Users/mac/Desktop/text2.txt",ios::out);
    char ch;
    
    while(fin.get(ch))
    {
        fout.put(ch);
        cout<<ch<<endl;
    }
    
    cout<<"複製完成"<<endl;
    fout.close();
    fin.close();
    return 0;
}

