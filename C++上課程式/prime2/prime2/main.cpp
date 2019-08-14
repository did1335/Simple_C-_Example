//
//  main.cpp
//  prime2
//
//  Created by mac on 2018/10/24.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,j,n;
    for (i=1;i<=1000;i++)
    {
        n=0;
        for (j=1;j<=i;j++){
            if(i%j==0)
                n++;
            if (n>2)
                break;
        }
        if(n==2 || n==1)
            cout << i << endl;
    }
    return 0;
}
