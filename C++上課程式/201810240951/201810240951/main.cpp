//
//  main.cpp
//  201810240951
//
//  Created by mac on 2018/10/24.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int i=1,sum=0;
    while (sum<=1000000) {
        sum+=i;
        i++;
    }
    cout<<"i="<<i-1<<endl;
    return 0;
}
