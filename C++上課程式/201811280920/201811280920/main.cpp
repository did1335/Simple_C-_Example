//
//  main.cpp
//  201811280920
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//
#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int x[2][5],i,j,sum=0,min,max,rnd;
    float avg;
    
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            cout<<"元素"<<"["<<i<<"]"<<"["<<j<<"]=";
            rnd=rand()%101;
            x[i][j]=rnd;
            cout<<x[i][j]<<endl;
            sum+=x[i][j];
        }
    }
    avg=sum/(2*5.0);
    min=x[0][0];max=x[0][0];
    
    for (i=0;i<2;i++){
        for(j=0;j<5;j++){
            if (x[i][j]>max)
                max=x[i][j];
            if(x[i][j]<min)
                min=x[i][j];
        }
    }
    
    cout<<"x[sum]="<<sum<<endl;
    cout<<"x[avg]="<<avg<<endl;
    cout<<"x[min]="<<min<<endl;
    cout<<"x[max]="<<max<<endl;

    return 0;
}


