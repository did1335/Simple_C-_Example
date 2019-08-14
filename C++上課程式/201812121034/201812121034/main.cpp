//
//  main.cpp
//  201812121034
//
//  Created by mac on 2018/12/12.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int *score,sum=0;
    float avg;
    char *name[5]={"Richard ","AmyLee ","PaulYang ","MaryWang ","JeamyFen "};
    score=new int[5];

    for (int i=0;i<5;i++){
        cout<<"請輸入"<<*(name+i)<<"的成績：";
        cin>>*(score+i);
        sum+=*(score+i);
    }

    for (int i=0;i<5;i++)
        cout<<*(name+i);
    cout<<endl;
    
    for (int i=0;i<5;i++){
        cout<<*(score+i)<<"\t";
        cout.width(7);
    }
    cout<<endl;
    
    delete [] score;

    avg=sum/5.0;
    cout<<"全班平均："<<avg<<endl;
    return 0;
}

