//
//  main.cpp
//  201911281136
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int x[2][3][5],i,j,k,sum=0,min,max,rnd;
    float avg;
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<5;k++){
            cout<<"元素"<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]=";
            rnd=rand()%101;
            x[i][j][k]=rnd;
            cout<<x[i][j][k]<<endl;
            sum+=x[i][j][k];
            }
        }
    }
    avg=sum/(2*3*5.0);
    min=x[0][0][0];max=x[0][0][0];
    
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<5;k++){
             if (x[i][j][k]>max)
                max=x[i][j][k];
             if(x[i][j][k]<min)
                min=x[i][j][k];
        }
      }
    }
    
    cout<<"x[sum]="<<sum<<endl;
    cout<<"x[avg]="<<avg<<endl;
    cout<<"x[min]="<<min<<endl;
    cout<<"x[max]="<<max<<endl;
    
    return 0;
}
