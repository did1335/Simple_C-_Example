//
//  main.cpp
//  201812050919
//
//  Created by mac on 2018/12/5.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int p[10000],sum=0;
    double x;
    srand(time(NULL));
    for (int i=0;i<10000;i++)
    {
        *(p+i)=rand()%101;
        cout<<"p("<<i<<")"<<*(p+i)<<endl;
        sum += *(p+i);
    }
    cout<<"sum="<<sum<<endl;
    x=sum/10000.0;
    cout<<"avg="<<x<<endl;
    return 0;
}
