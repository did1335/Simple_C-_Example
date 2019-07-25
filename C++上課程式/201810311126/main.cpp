//
//  main.cpp
//  201810311126
//
//  Created by mac on 2018/10/31.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    cout<<"Please enter x="<<endl;
    cin>>x;
    if(x<2)
    {
        cout<<"error"<<endl;
    }
    else if(x==2)
        cout<<"1+2="<<sum(x)<<endl;
    else
    cout<<"1+2+....+"<<x<<"="<<sum(x)<<endl;
    return 0;
}

int sum(int j){
    int tol=0;
    for(int i=1;i<=j;i++)
        tol+=i;
    return tol;
}
