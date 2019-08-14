//
//  main.cpp
//  salary
//
//  Created by mac on 2018/10/17.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int hour,salary;
    cout<<"請輸入工作時數:";
    cin>>hour;
    
    if(hour>=0)
    {
        if(hour<=60)
        {
            salary=hour*85;
            cout<<"月薪為"<<salary<<endl;
        }
        else if (hour>=76)
        {
            salary=85*60+100*(75-60)+(hour-75)*150;
            cout<<"月薪為"<<salary<<endl;
        }
        else{
            salary=85*60+100*(hour-60);
            cout<<"月薪為"<<salary<<endl;
        }
   }
   else{cout<<"輸入錯誤"<<endl;}
 return 0;
}
