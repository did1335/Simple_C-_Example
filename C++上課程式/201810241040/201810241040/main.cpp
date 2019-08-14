//
//  main.cpp
//  201810241040
//
//  Created by mac on 2018/10/24.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,sum=0;
    for (i=1;i<=100;i++){
        sum+=(i*i*i+i*i);
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}
