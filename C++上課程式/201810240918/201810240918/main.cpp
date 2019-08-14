//
//  main.cpp
//  201810240918
//
//  Created by mac on 2018/10/24.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    int i,square=0;
    long factorial=1;
    
    for (i=1;i<=19;i+=2) {
        square=square+i*i;
    }
    
    for (i=1;i<=15;i++){
        factorial=factorial*i;
    }
    
    cout<<"1^2+3^2+...+19^2="<<square<<endl
        <<"15!="<<factorial<<endl;

    return 0;
}

