//
//  main.cpp
//  201810310912
//
//  Created by mac on 2018/10/31.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    srand(time(NULL));
    for (int j=1; j<=4; j++) {
        for(int i=1;i<=6;i++){
        a=rand()%49+1;
        cout<<"a"<<i<<"="<<a<<"\t";
        }
    cout<<endl;
    }
    return 0;
}
