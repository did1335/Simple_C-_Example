//
//  main.cpp
//  201901020918
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
    ofstream fout("/Users/mac/Desktop/text1.txt",ios::out);
    char txt[]="國立勤益科技大學 機械工程系";
    cin.getline(txt,80); //輸入最多８０字元
    int i=0;
    while(txt[i] != '\0')
    {
        fout.put(txt[i]);
        i++;
    }
    cout<<"寫入完成"<<endl;
    fout.close();
    return 0;
}
