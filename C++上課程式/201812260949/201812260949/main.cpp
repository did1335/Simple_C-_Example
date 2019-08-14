//
//  main.cpp
//  201812260949
//
//  Created by mac on 2018/12/26.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"
#include <iomanip> //設定輸出精度

int main(int argc, const char * argv[]) {
    // insert code here...
    ofstream fout;
   // double x=-10.0,y;
    double x=-20.0,y;
    //fout.open("/Users/mac/Desktop/text.txt",ios::out);
    fout.open("/Users/mac/Desktop/text1.txt",ios::app);

    if(fout.is_open())
    {
        fout<<"x\ty"<<endl;
        /*for(int i=0;i<=40;i++){
            y=log(x+2.0)+abs(pow(x,2));
            fout<<x<<"\t"<<y<<endl;
            x+=0.5;
        }*/
        
        for(int i=0;i<=80;i++){
            y=log(x+2.0)+abs(pow(x,2));
            fout<<setiosflags(ios::fixed)<<setprecision(1)<<x<<"\t";
            fout<<y<<endl;
            x+=0.5;
        }
        
        cout<<"字串輸入完畢"<<endl;
    }
    else
        cout<<"檔案開啟失敗"<<endl;
    fout.close();
    
    return 0;
}
