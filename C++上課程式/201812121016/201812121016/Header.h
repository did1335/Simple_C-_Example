//
//  Header.h
//  201812121016
//
//  Created by mac on 2018/12/12.
//  Copyright © 2018年 mac. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <cstdlib>
using namespace std;

void chg(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"2.*a="<<*a<<",*b="<<*b<<endl;
}


#endif /* Header_h */
