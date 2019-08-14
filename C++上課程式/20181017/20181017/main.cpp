//
//  main.cpp
//  20181017
//
//  Created by mac on 2018/10/17.
//  Copyright © 2018年 mac. All rights reserved.
//


#include "Header.h"


int x;

int main(int argc, const char * argv[])
{
    string arr[]={"A等","B等","C等","D等","E等"};
    
    cout<<"請輸入分數:";
    cin>>x;
    if(x>=90&&x<=100)
    {
        display(arr[0]);
    }
    else if(x>=80&&x<90)
    {
        display(arr[1]);
    }
    else if(x>=70&&x<80)
    {
        display(arr[2]);
    }
    else if(x>=60&&x<70)
    {
        display(arr[3]);
    }
    else if(x>=0&&x<60)
    {
        display(arr[4]);
    }
    else
    {
        cout<<x<<"輸入錯誤"<<endl;
    }
    return 0;
}

void display(string str)
{
    cout<<x<<"分為"<<str<<endl;
}
