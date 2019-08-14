//
//  main.cpp
//  multiplication table
//
//  Created by mac on 2018/10/24.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,j;
    
    cout<<"九九乘法表"<<endl;
    
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            cout<<i<<"*"<<j<<"="<<(i*j)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
