//
//  main.cpp
//  201811211043
//
//  Created by mac on 2018/11/21.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"
#include <iomanip>


int main(int argc, const char * argv[]) {
    // insert code here...
    double x[21],y[21];
    x[0]=0.0;
    //y[0]=pow(x[0],3)+2*pow(x[0],2)+1;
    
    for(int i=0;i<21;i++){
        x[i]=(i)/2.;
        y[i]=pow(x[i],3)+2*pow(x[i],2)+1;
        cout<<"x["<<i<<"]="<<setiosflags(ios::fixed)<<setprecision(1)<<x[i]
        <<"\t"<<"==>"<<"\t"
        <<setprecision(3)<<"y["<<i<<"]="<<y[i]<<endl;
    }
    return 0;
}
